//---------------------------------------------------------------------------
#include <ObjBase.h>

#include <vcl.h>
#pragma hdrstop

#include "MainForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "LineChart"
#pragma link "CSPIN"
#pragma resource "*.dfm"
TForm1 *Form1;
Thread *Th;
//---------------------------------------------------------------------------
HRESULT hr;
VARIANT_BOOL r;
int _r;
char* cbuff = new char[1024];
//------------------------- Const ------------------------------------------
double Gain[2] = {20.0, 2.0};
double Divide[4] = {1.0, 2.0, 10.0, 50.0};
double Multiplie[10] = {0.1, 0.25, 0.5, 1.0, 2.0, 5.0, 10.0, 20.0, 50.0, 100.0};
double Seamples[8] = {100000, 50000, 20000, 10000, 5000, 2000, 1000, 500};
double TimeGain[8] = {10, 20, 50, 100, 200, 500, 1000, 2000};
unsigned long mSleep[8] = {5, 10, 20, 50, 100, 200, 500, 1000};

LineItem __p1_lines[2];
LineItem __p2_lines[3];
//------------------------- Thread ------------------------------------------
__fastcall Thread::Thread()
:TThread(true)
{
        this->FreeOnTerminate = true;
}
//---------------------------------------------------------------------------
__fastcall Thread::~Thread()
{

}
//---------------------------------------------------------------------------
void __fastcall Thread::Execute()
{
    switch(this->fncId)
    {
         case 1: fn1(); break;
         case 2: fn2(); break;
         case 3: fn3(); break;
         case 4: fn4(); break;
    }
}
void __fastcall Thread::fn1()
{
        Form1->__p1_LineChart->Lines.clear();
        Form1->_IOscilloscope->ClearData();
        Form1->_IDevice->ResetDevice();

        Form1->__p1_LineChart->Seamples = 1000;

        // Init osc param
        Form1->_IOscilloscope->SetChannelMaxGain(A, Gain[Form1->__p1_GainA->ItemIndex]);
        Form1->_IOscilloscope->SetChannelMaxGain(B, Gain[Form1->__p1_GainB->ItemIndex]);
        Form1->_IOscilloscope->SetSamplingFrequency(Seamples[Form1->__p1_time->ItemIndex]);

        if(Form1->__p1_enA->Checked)
        {
                __p1_lines[0].Divide = Divide[Form1->__p1_divA->ItemIndex];
                __p1_lines[0].Scale = Multiplie[Form1->__p1_factorA->ItemIndex];
                __p1_lines[0].Width = Form1->__p1_LineASize->Value;

                Form1->__p1_LineChart->Lines.push_back(&__p1_lines[0]);
                __p1_lines[0].Gain = Gain[Form1->__p1_GainA->ItemIndex];

                Form1->_IOscilloscope->SetChannelOnOff(A, On);
                Form1->_IOscilloscope->SetChannelSyncSkip(A, 0);
        }
        else
                Form1->_IOscilloscope->SetChannelOnOff(A, Off);

        if(Form1->__p1_enB->Checked)
        {
                __p1_lines[1].Divide = Divide[Form1->__p1_divB->ItemIndex];
                __p1_lines[1].Scale = Multiplie[Form1->__p1_factorB->ItemIndex];
                __p1_lines[1].Width = Form1->__p1_LineBSize->Value;

                Form1->__p1_LineChart->Lines.push_back(&__p1_lines[1]);
                __p1_lines[1].Gain = Gain[Form1->__p1_GainB->ItemIndex];

                Form1->_IOscilloscope->SetChannelOnOff(B, On);
                Form1->_IOscilloscope->SetChannelSyncSkip(B, 0);
        }
        else
                Form1->_IOscilloscope->SetChannelOnOff(B, Off);

        Form1->_IOscilloscope->SetStreamDataPartSize(1000, &r);
        int pBuffSize = Form1->__p1_pBuff->ItemIndex * 100;
        Form1->_IOscilloscope->SetStreamingBuffersOptions(pBuffSize, 1000 - pBuffSize);
        Form1->_IOscilloscope->SetPipeBufferSize(65535);
        Form1->_IOscilloscope->SetStreamingDataOptions(VARIANT_TRUE);


        if(Form1->__p1_TriggerEn->Checked)
        {
                Form1->_IOscilloscope->SetImmediateTriggerMode();
                Form1->_IOscilloscope->SetTrigger(Form1->__p1_TriggerChannel->ItemIndex, Form1->__p1_TriggerEdge->ItemIndex + 2, StrToFloat(Form1->__p1_TriggerLevel->Text), &r);
        }
        else
        {
                Form1->_IOscilloscope->SetDependedTriggerMode();
        }


        Form1->_IOscilloscope->SetPipeMode(Pipe);
        Form1->_IOscilloscope->StartStreamingData();

        int cm, pm, m;
        pm = cm = 0;
        long _cm, mc;
        do
        {
                Sleep(mSleep[Form1->__p1_time->ItemIndex]);

                if(Form1->__p1_TriggerEn->Checked)
                {
                        Form1->_IOscilloscope->GetMarkCount(Form1->__p1_TriggerChannel->ItemIndex, &mc);

                        if(mc == 0)
                                continue;

                        Form1->_IOscilloscope->GetSampleCount(&m);

                        bool isExistsData = false;
                        for(int i=mc - 1; i >= 0; i--)
                        {
                                Form1->_IOscilloscope->GetSyncMark(Form1->__p1_TriggerChannel->ItemIndex, i, &_cm);
                                if(m >= (_cm + 1000 - pBuffSize)
                                   && (pm + 1000 - pBuffSize) < _cm)
                                {
                                        isExistsData = true;
                                        break;
                                }
                        }

                        if(!isExistsData)
                                continue;
                        cm = _cm - pBuffSize;
                }
                else
                {
                        Form1->_IOscilloscope->GetSampleCount(&m);
                        if(m < 1000)
                                continue;
                        cm = m / 1000;
                        cm--;
                        cm *= 1000;
                }

                if(cm > pm)
                {
                        pm = cm;
                        if(Form1->__p1_enA->Checked)
                        {
                                Form1->_IOscilloscope->GetChannelDataArray(A, __p1_lines[0].Data, cm, 1000, &_r);
                               if(Form1->__p1_invA->Checked)
                                        for(int i=0;i<1000;i++) __p1_lines[0].Data[i] *= -1.0;
                        }
                        if(Form1->__p1_enB->Checked)
                        {
                                Form1->_IOscilloscope->GetChannelDataArray(B, __p1_lines[1].Data, cm, 1000, &_r);
                                if(Form1->__p1_invB->Checked)
                                        for(int i=0;i<1000;i++) __p1_lines[1].Data[i] *= -1.0;
                        }
                        this->Synchronize(Form1->__p1_LineChart->Invalidate);
                        this->Synchronize(Form1->__p1_getStatParam);
                }
             if(m > 12000000)
             {
                    Form1->_IOscilloscope->ClearData();
                    pm = 0;
             }
        }
        while(!this->Terminated);
        Form1->_IOscilloscope->StopStreaming();
        Form1->_IOscilloscope->ClearData();
        Form1->_IDevice->ResetDevice();
}
bool __p1_singleStatus = false;
void __fastcall Thread::fn2()
{
        Form1->__p1_LineChart->Lines.clear();
        Form1->_IOscilloscope->ClearData();
        Form1->_IDevice->ResetDevice();

        Form1->__p1_LineChart->Seamples = 1000;

        // Init osc param
        Form1->_IOscilloscope->SetChannelMaxGain(A, Gain[Form1->__p1_GainA->ItemIndex]);
        Form1->_IOscilloscope->SetChannelMaxGain(B, Gain[Form1->__p1_GainB->ItemIndex]);
        Form1->_IOscilloscope->SetSamplingFrequency(Seamples[Form1->__p1_time->ItemIndex]);

        if(Form1->__p1_enA->Checked)
        {
                __p1_lines[0].Divide = Divide[Form1->__p1_divA->ItemIndex];
                __p1_lines[0].Scale = Multiplie[Form1->__p1_factorA->ItemIndex];
                __p1_lines[0].Width = Form1->__p1_LineASize->Value;

                Form1->__p1_LineChart->Lines.push_back(&__p1_lines[0]);
                __p1_lines[0].Gain = Gain[Form1->__p1_GainA->ItemIndex];

                Form1->_IOscilloscope->SetChannelOnOff(A, On);
                Form1->_IOscilloscope->SetChannelSyncSkip(A, 0);
        }
        else
                Form1->_IOscilloscope->SetChannelOnOff(A, Off);

        if(Form1->__p1_enB->Checked)
        {
                __p1_lines[1].Divide = Divide[Form1->__p1_divB->ItemIndex];
                __p1_lines[1].Scale = Multiplie[Form1->__p1_factorB->ItemIndex];
                __p1_lines[1].Width = Form1->__p1_LineBSize->Value;

                Form1->__p1_LineChart->Lines.push_back(&__p1_lines[1]);
                __p1_lines[1].Gain = Gain[Form1->__p1_GainB->ItemIndex];

                Form1->_IOscilloscope->SetChannelOnOff(B, On);
                Form1->_IOscilloscope->SetChannelSyncSkip(B, 0);
        }
        else
                Form1->_IOscilloscope->SetChannelOnOff(B, Off);

        Form1->_IOscilloscope->SetStreamDataPartSize(1000, &r);
        int pBuffSize = Form1->__p1_pBuff->ItemIndex * 100;
        Form1->_IOscilloscope->SetStreamingBuffersOptions(pBuffSize, 1000 - pBuffSize);
        Form1->_IOscilloscope->SetPipeBufferSize(65535);
        Form1->_IOscilloscope->SetStreamingDataOptions(VARIANT_TRUE);


        if(Form1->__p1_TriggerEn->Checked)
        {
                Form1->_IOscilloscope->SetImmediateTriggerMode();
                Form1->_IOscilloscope->SetTrigger(Form1->__p1_TriggerChannel->ItemIndex, Form1->__p1_TriggerEdge->ItemIndex + 2, StrToFloat(Form1->__p1_TriggerLevel->Text), &r);
        }
        else
        {
                Form1->_IOscilloscope->SetDependedTriggerMode();
        }


        Form1->_IOscilloscope->SetPipeMode(Pipe);
        Form1->_IOscilloscope->StartStreamingData();

        int cm, pm, m;
        pm = cm = 0;
        long _cm, mc;
        do
        {
                Sleep(mSleep[Form1->__p1_time->ItemIndex]);

                if(Form1->__p1_TriggerEn->Checked)
                {
                        Form1->_IOscilloscope->GetMarkCount(Form1->__p1_TriggerChannel->ItemIndex, &mc);

                        if(mc == 0)
                                continue;

                        Form1->_IOscilloscope->GetSampleCount(&m);

                        bool isExistsData = false;
                        for(int i=mc - 1; i >= 0; i--)
                        {
                                Form1->_IOscilloscope->GetSyncMark(Form1->__p1_TriggerChannel->ItemIndex, i, &_cm);
                                if(m >= (_cm + 1000 - pBuffSize)
                                   && (pm + 1000 - pBuffSize) < _cm)
                                {
                                        isExistsData = true;
                                        break;
                                }
                        }

                        if(!isExistsData)
                                continue;
                        cm = _cm - pBuffSize;
                }
                else
                {
                        Form1->_IOscilloscope->GetSampleCount(&m);
                        if(m < 1000)
                                continue;
                        cm = m / 1000;
                        cm--;
                        cm *= 1000;
                }

                if(cm > pm)
                {
                        pm = cm;
                        if(Form1->__p1_enA->Checked)
                        {
                                Form1->_IOscilloscope->GetChannelDataArray(A, __p1_lines[0].Data, cm, 1000, &_r);
                                if(Form1->__p1_invA->Checked)
                                        for(int i=0;i<1000;i++) __p1_lines[0].Data[i] *= -1.0;
                        }
                        if(Form1->__p1_enB->Checked)
                        {
                                Form1->_IOscilloscope->GetChannelDataArray(B, __p1_lines[1].Data, cm, 1000, &_r);
                                if(Form1->__p1_invB->Checked)
                                        for(int i=0;i<1000;i++) __p1_lines[1].Data[i] *= -1.0;
                        }
                        this->Synchronize(Form1->__p1_LineChart->Invalidate);
                        this->Synchronize(Form1->__p1_getStatParam);
                        goto fn2exit;
                }
        }
        while(!this->Terminated);
fn2exit:
        Form1->_IOscilloscope->StopStreaming();
        Form1->_IOscilloscope->ClearData();
        Form1->_IDevice->ResetDevice();

        __p1_singleStatus = false;
        Form1->isUseDevice = false;
        Form1->__p1_single->Font->Style = TFontStyles();
        this->Synchronize(Form1->__p1_single->Invalidate);
}
int __p2_BaseSeampleFreqIndx, __p2_seampleCount;
void __fastcall Thread::fn3()
{
        Form1->__p2_LineChart->Lines.clear();
        Form1->_IOscilloscope->ClearData();
        Form1->_IDevice->ResetDevice();

        Form1->__p2_LineChart->Seamples = 1000;

        // Init osc param
        Form1->_IOscilloscope->SetChannelMaxGain(A, Gain[Form1->__p2_GainA->ItemIndex]);
        Form1->_IOscilloscope->SetChannelMaxGain(B, Gain[Form1->__p2_GainB->ItemIndex]);
        Form1->_IOscilloscope->SetSamplingFrequency(Seamples[Form1->__p2_time->ItemIndex]);
        __p2_BaseSeampleFreqIndx = Form1->__p2_time->ItemIndex;

        if(Form1->__p2_enA->Checked)
        {
                __p2_lines[0].Divide = Divide[Form1->__p2_divA->ItemIndex];
                __p2_lines[0].Scale = Multiplie[Form1->__p2_factorA->ItemIndex];
                __p2_lines[0].Width = Form1->__p2_LineASize->Value;

                Form1->__p2_LineChart->Lines.push_back(&__p2_lines[0]);
                __p2_lines[0].Gain = Gain[Form1->__p2_GainA->ItemIndex];

                Form1->_IOscilloscope->SetChannelOnOff(A, On);
                Form1->_IOscilloscope->SetChannelSyncSkip(A, 0);
        }
        else
                Form1->_IOscilloscope->SetChannelOnOff(A, Off);

        if(Form1->__p2_enB->Checked)
        {
                __p2_lines[1].Divide = Divide[Form1->__p2_divB->ItemIndex];
                __p2_lines[1].Scale = Multiplie[Form1->__p2_factorB->ItemIndex];
                __p2_lines[1].Width = Form1->__p2_LineBSize->Value;

                Form1->__p2_LineChart->Lines.push_back(&__p2_lines[1]);
                __p2_lines[1].Gain = Gain[Form1->__p2_GainB->ItemIndex];

                Form1->_IOscilloscope->SetChannelOnOff(B, On);
                Form1->_IOscilloscope->SetChannelSyncSkip(B, 0);
        }
        else
                Form1->_IOscilloscope->SetChannelOnOff(B, Off);

        if(Form1->__p2_TriggerEn->Checked)
        {
                __p2_lines[2].Width = Form1->__p2_TriggerLineSize->Value;

                __p2_lines[2].Divide = 1;
                __p2_lines[2].Scale = 1;
                __p2_lines[2].Gain = 1;

                Form1->__p2_LineChart->Lines.push_back(&__p2_lines[2]);
        }

        Form1->_IOscilloscope->SetStreamDataPartSize(1000, &r);
        Form1->_IOscilloscope->SetStreamingBuffersOptions(0, 1000);
        Form1->_IOscilloscope->SetPipeBufferSize(65535);
        Form1->_IOscilloscope->SetStreamingDataOptions(VARIANT_TRUE);


        if(Form1->__p2_TriggerEn->Checked)
        {
                Form1->_IOscilloscope->SetImmediateTriggerMode();
                Form1->_IOscilloscope->SetTrigger(Form1->__p2_TriggerChannel->ItemIndex, Form1->__p2_TriggerEdge->ItemIndex + 2, StrToFloat(Form1->__p2_TriggerLevel->Text), &r);
        }
        else
        {
                Form1->_IOscilloscope->SetDependedTriggerMode();
        }


        Form1->_IOscilloscope->SetPipeMode(Pipe);
        Form1->_IOscilloscope->StartStreamingData();

        int m;
        long mc, cm;
        do
        {
                Sleep(mSleep[Form1->__p2_time->ItemIndex]);

                Form1->_IOscilloscope->GetSampleCount(&m);
                if(m < 1000) continue;

                if(Form1->__p2_enA->Checked)
                {
                       Form1->_IOscilloscope->GetChannelDataArray(A, __p2_lines[0].Data, m-1000, 1000, &_r);

                      if(Form1->__p2_invA->Checked)
                        for(int i=0;i<1000;i++) __p2_lines[0].Data[i] *= -1.0;
                }
                if(Form1->__p2_enB->Checked)
                {
                       Form1->_IOscilloscope->GetChannelDataArray(B, __p2_lines[1].Data, m-1000, 1000, &_r);

                      if(Form1->__p2_invB->Checked)
                        for(int i=0;i<1000;i++) __p2_lines[1].Data[i] *= -1.0;
                }
                if(Form1->__p2_TriggerEn->Checked)
                {
                       for(int i=0; i<1000; i++)
                                __p2_lines[2].Data[i] = 0;
                                
                       Form1->_IOscilloscope->GetMarkCount(Form1->__p2_TriggerChannel->ItemIndex, &mc);
                       for(long j=mc-1; j >= 0; j--)
                       {
                           Form1->_IOscilloscope->GetSyncMark(Form1->__p2_TriggerChannel->ItemIndex, j, &cm);
                           if(cm > m) continue;
                           if(cm < (m - 1000)) break;
                           __p2_lines[2].Data[1000-(m-cm)] = 1;
                       }
                }
                this->Synchronize(Form1->__p2_LineChart->Invalidate);
        }
        while(!this->Terminated);

        Form1->_IOscilloscope->StopStreaming();
        Form1->_IOscilloscope->GetSampleCount(&__p2_seampleCount);
        Form1->__p2_hScrollBar->Position = 0;
        this->Synchronize(Form1->__p2_CalculateData);
}
void __fastcall Thread::fn4()
{
}

//--------------------------  TForm -----------------------------------------
double avgA, avgB;
void __fastcall TForm1::__p1_getStatParam()
{
        double value;
if(this->__p1_enA->Checked)
{
        this->_IOscilloscope->GetChannelStatParam(StatMax, A, &value);
        this->__p1_UmaxA->Caption = "Max:" + AnsiString(value);
        this->_IOscilloscope->GetChannelStatParam(StatMin, A, &value);
        this->__p1_UminA->Caption = "Min:" + AnsiString(value);
        this->_IOscilloscope->GetChannelStatParam(StatAvg, A, &avgA);
        this->__p1_UavgA->Caption = "Avg:" + AnsiString(avgA);
}
if(this->__p1_enB->Checked)
{
        this->_IOscilloscope->GetChannelStatParam(StatMax, B, &value);
        this->__p1_UmaxB->Caption = "Max:" + AnsiString(value);
        this->_IOscilloscope->GetChannelStatParam(StatMin, B, &value);
        this->__p1_UminB->Caption = "Min:" + AnsiString(value);
        this->_IOscilloscope->GetChannelStatParam(StatAvg, B, &avgB);
        this->__p1_UavgB->Caption = "Avg:" + AnsiString(avgB);
}
}
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
        __p1_lines[0].Data = new double[1000];
        __p1_lines[0].Color = clRed;
        __p1_lines[1].Data = new double[1000];
        __p1_lines[1].Color = clBlue;

        __p2_lines[0].Data = new double[1000];
        __p2_lines[0].Color = clRed;
        __p2_lines[1].Data = new double[1000];
        __p2_lines[1].Color = clBlue;
        __p2_lines[2].Data = new double[1000];
        __p2_lines[2].Color = clGreen;

        this->DoubleBuffered = true;

        // Initializing Visual Component
        this->Panel1->DoubleBuffered = true;
        this->Panel2->DoubleBuffered = true;
        this->__p1_LineChart->Anchors = TAnchors() << akLeft << akTop << akRight << akBottom;
        this->__p2_LineChart->Anchors = TAnchors() << akLeft << akTop << akRight << akBottom;
        this->__p1_time->ItemIndex = 3;
        this->__p2_time->ItemIndex = 3;

        // Initializing COM library
        CoInitialize(NULL);
        hr = CoCreateInstance(CLSID_CoDiscoAPI,
                            NULL,
                            CLSCTX_INPROC_SERVER,
                            IID_IDevice,
                            (void**) &_IDevice );

        if (!SUCCEEDED ( hr ) )
                throw Exception("Не возможно инициализировать COM обьект IDevice!");
        if(!SUCCEEDED ( this->_IDevice->QueryInterface(IID_IOscilloscope,(void**) &_IOscilloscope)) )
                throw Exception("Не возможно инициализировать COM обьект IOscilloscope!");

        // Initializing DiscoAPI Oscilloscope
        if (!SUCCEEDED ( this->_IDevice->Init(-1, DisableAutoUpdate, &r)) )
                throw Exception("Не возможно инициализировать USB Oscilloscope!");
        if(r == VARIANT_FALSE)
                throw Exception("Не возможно инициализировать USB Oscilloscope!");

        // Get firmware information
        wchar_t *fw;
        this->_IDevice->GetFirmwareVersion(&fw);
        this->_StatusBar->Panels[0][0]->Text = WideCharToString(fw);
        SysFreeString(fw);
}
//---------------------------------------------------------------------------
__fastcall TForm1::~TForm1()
{
        delete[] __p1_lines[0].Data;
        delete[] __p1_lines[1].Data;

        delete[] __p2_lines[0].Data;
        delete[] __p2_lines[1].Data;
        delete[] __p2_lines[2].Data;

        // Release DiscoAPI Oscilloscope
        if(this->_IDevice != NULL)
        {
                this->_IDevice->ResetDevice();
                this->_IDevice->Uninit();
        }

        // Release COM objects
        if(this->_IOscilloscope != NULL)
                this->_IOscilloscope->Release();
        if(this->_IOscilloscope != NULL)
                this->_IDevice->Release();

        // Release COM library
        CoUninitialize();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::_mExitClick(TObject *Sender)
{
        this->Close();        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::__p1_singleClick(TObject *Sender)
{
        if(!__p1_singleStatus && !isUseDevice)
        {
                Th = new Thread();
                Th->fncId = 2;
                Th->Resume();

                // Mark button
                this->__p1_single->Font->Style = TFontStyles() << fsBold;
                __p1_singleStatus = true;

                this->isUseDevice = true;
        }
        else
        if(__p1_singleStatus && isUseDevice)
        {
                Th->Terminate();

                //  Mark button
                this->__p1_single->Font->Style = TFontStyles();
                __p1_singleStatus = false;

                this->isUseDevice = false;
        }
}
//---------------------------------------------------------------------------
bool __p1_cyclycStatus = false;
void __fastcall TForm1::__p1_cyclycClick(TObject *Sender)
{
        if(!__p1_cyclycStatus && !isUseDevice)
        {
                Th = new Thread();
                Th->fncId = 1;
                Th->Resume();

                this->__p1_cyclyc->Font->Style = TFontStyles() << fsBold;
                __p1_cyclycStatus = true;

                this->isUseDevice = true;
        }
        else
        if(__p1_cyclycStatus && isUseDevice)
        {
                Th->Terminate();

                this->__p1_cyclyc->Font->Style = TFontStyles();
                __p1_cyclycStatus = false;

                this->isUseDevice = false;
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::__p1_LineChartChange(TObject *Sender)
{
    double Ta = (TimeGain[this->__p1_time->ItemIndex] / (double)this->__p1_LineChart->Width) * this->__p1_LineChart->MarkerA.RealPosition;
    this->__p1_Ta->Caption = "Ta: " + AnsiString(Ta);
    double Tb = (TimeGain[this->__p1_time->ItemIndex] / (double)this->__p1_LineChart->Width) * this->__p1_LineChart->MarkerB.RealPosition;
    this->__p1_Tb->Caption = "Tb: " + AnsiString(Tb);
    this->__p1_Tba->Caption = "Tb-a: " + AnsiString(Tb - Ta);
    double Fba = 0;
    if((Tb - Ta) != 0)
        Fba = (1 / (Tb - Ta)) * 1000.0;
    this->__p1_Fba->Caption = "Fb-a: " + AnsiString(Fba);
    this->__p1_Ignba->Caption = "IGNb-a: " + AnsiString((Fba / 2) * 60);

    if(this->__p1_LineChart->Seamples > 0)
    {
        double Uach1 = (__p1_lines[0].Data[this->__p1_LineChart->MarkerA.SeamplesPosition] * Divide[Form1->__p1_divA->ItemIndex]) / Multiplie[Form1->__p1_factorA->ItemIndex];
        this->__p1_Uach1->Caption = "Uach1: " + AnsiString(Uach1);
        double Ubch1 = (__p1_lines[0].Data[this->__p1_LineChart->MarkerB.SeamplesPosition] * Divide[Form1->__p1_divB->ItemIndex]) / Multiplie[Form1->__p1_factorB->ItemIndex];
        this->__p1_Ubch1->Caption = "Ubch1: " + AnsiString(Ubch1);
        double Ubach1 = Ubch1 - Uach1;
        this->__p1_Ubach1->Caption = "Ub-ach1: " + AnsiString(Ubach1);

        double Uach2 = (__p1_lines[1].Data[this->__p1_LineChart->MarkerA.SeamplesPosition] * Divide[Form1->__p1_divA->ItemIndex]) / Multiplie[Form1->__p1_factorA->ItemIndex];
        this->__p1_Uach2->Caption = "Uach2: " + AnsiString(Uach2);
        double Ubch2 = (__p1_lines[1].Data[this->__p1_LineChart->MarkerB.SeamplesPosition] * Divide[Form1->__p1_divB->ItemIndex]) / Multiplie[Form1->__p1_factorB->ItemIndex];
        this->__p1_Ubch2->Caption = "Ubch2: " + AnsiString(Ubch2);
        double Ubach2 = Ubch2 - Uach2;
        this->__p1_Ubach2->Caption = "Ub-ach2: " + AnsiString(Ubach2);
    }


    double Uca = ((this->__p1_LineChart->Height / 2) - __p1_lines[0].Offest - ((__p1_vScrollBar->Position - 10) * 100) -  this->__p1_LineChart->MarkerC.RealPosition) * (Gain[Form1->__p1_GainA->ItemIndex] / this->__p1_LineChart->Height);
    Uca = (Uca * Divide[Form1->__p1_divA->ItemIndex]) / Multiplie[Form1->__p1_factorA->ItemIndex];
    if(__p1_invA->Checked) Uca *= -1.0;
    this->__p1_Uca->Caption = "Uca: " + AnsiString(Uca);
    double Ucb = ((this->__p1_LineChart->Height / 2) - __p1_lines[1].Offest - ((__p1_vScrollBar->Position - 10) * 100) -  this->__p1_LineChart->MarkerC.RealPosition) * (Gain[Form1->__p1_GainB->ItemIndex] / this->__p1_LineChart->Height);
    Ucb = (Ucb * Divide[Form1->__p1_divB->ItemIndex]) / Multiplie[Form1->__p1_factorB->ItemIndex];
    if(__p1_invB->Checked) Ucb *= -1.0;
    this->__p1_Ucb->Caption = "Ucb: " + AnsiString(Ucb);
    double Uda = ((this->__p1_LineChart->Height / 2) - __p1_lines[0].Offest - ((__p1_vScrollBar->Position - 10) * 100) -  this->__p1_LineChart->MarkerD.RealPosition) * (Gain[Form1->__p1_GainA->ItemIndex] / this->__p1_LineChart->Height);
    Uda = (Uda * Divide[Form1->__p1_divA->ItemIndex]) / Multiplie[Form1->__p1_factorA->ItemIndex];
    if(__p1_invA->Checked) Uda *= -1.0;
    this->__p1_Uda->Caption = "Uda: " + AnsiString(Uda);
    double Udb = ((this->__p1_LineChart->Height / 2) - __p1_lines[1].Offest - ((__p1_vScrollBar->Position - 10) * 100) -  this->__p1_LineChart->MarkerD.RealPosition) * (Gain[Form1->__p1_GainB->ItemIndex] / this->__p1_LineChart->Height);
    Udb = (Udb * Divide[Form1->__p1_divB->ItemIndex]) / Multiplie[Form1->__p1_factorB->ItemIndex];
    if(__p1_invB->Checked) Udb *= -1.0;
    this->__p1_Udb->Caption = "Udb: " + AnsiString(Udb);


    if(this->__p1_TriggerChannel->ItemIndex == 0)
    {
        if(this->__p1_TriggerType->ItemIndex ==0)
        {
             this->__p1_TriggerLevel->Text = AnsiString(Uca);
        }
        else
        {
             this->__p1_TriggerLevel->Text = AnsiString(Uca-Uda);
        }
    }
    if(this->__p1_TriggerChannel->ItemIndex == 1)
    {
        if(this->__p1_TriggerType->ItemIndex ==0)
        {
             this->__p1_TriggerLevel->Text = AnsiString(Ucb);
        }
        else
        {
             this->__p1_TriggerLevel->Text = AnsiString(Ucb-Udb);
        }
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::__p1_setZeroAClick(TObject *Sender)
{
        __p1_lines[0].Offest = 0;
        __p1_LineChart->Invalidate();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::__p1_setZeroBClick(TObject *Sender)
{
        __p1_lines[1].Offest = 0;
        __p1_LineChart->Invalidate();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::__p1_setViewAClick(TObject *Sender)
{
     __p1_lines[0].Offest = -((avgA / Divide[this->__p1_divA->ItemIndex]) * Multiplie[this->__p1_factorA->ItemIndex]) * (this->__p1_LineChart->Height / Gain[Form1->__p1_GainA->ItemIndex]);
     __p1_LineChart->Invalidate();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::__p1_setViewBClick(TObject *Sender)
{
     __p1_lines[1].Offest = -((avgB / Divide[this->__p1_divB->ItemIndex]) * Multiplie[this->__p1_factorB->ItemIndex]) * (this->__p1_LineChart->Height / Gain[Form1->__p1_GainB->ItemIndex]);
     __p1_LineChart->Invalidate();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::__p1_vScrollBarChange(TObject *Sender)
{
    __p1_LineChart->VerticalOffset = (__p1_vScrollBar->Position - 10) * 100;
    __p1_LineChart->Invalidate();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::__p1_divAChange(TObject *Sender)
{
        __p1_lines[0].Divide = Divide[this->__p1_divA->ItemIndex];
        __p1_LineChart->Invalidate();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::__p1_factorAChange(TObject *Sender)
{
        __p1_lines[0].Scale = Multiplie[Form1->__p1_factorA->ItemIndex];
        __p1_LineChart->Invalidate();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::__p1_divBChange(TObject *Sender)
{
        __p1_lines[1].Divide = Divide[this->__p1_divB->ItemIndex];
        __p1_LineChart->Invalidate();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::__p1_factorBChange(TObject *Sender)
{
        __p1_lines[1].Scale = Multiplie[Form1->__p1_factorB->ItemIndex];
        __p1_LineChart->Invalidate();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::__p1_LineASizeChange(TObject *Sender)
{
        __p1_lines[0].Width = __p1_LineASize->Value;
        __p1_LineChart->Invalidate();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::__p1_LineBSizeChange(TObject *Sender)
{
        __p1_lines[1].Width = __p1_LineBSize->Value;
        __p1_LineChart->Invalidate();
}
//---------------------------------------------------------------------------
bool __p2_recoderStatus = false;
void __fastcall TForm1::__p2_recoderClick(TObject *Sender)
{
        if(!__p2_recoderStatus && !isUseDevice)
        {
                Th = new Thread();
                Th->fncId = 3;
                Th->Resume();

                // Mark button
                this->__p2_recoder->Font->Style = TFontStyles() << fsBold;
                __p2_recoderStatus = true;

                this->isUseDevice = true;
                this->__p2_hScrollBar->Enabled = false;
        }
        else
        if(__p2_recoderStatus && isUseDevice)
        {
                Th->Terminate();

                //  Mark button
                this->__p2_recoder->Font->Style = TFontStyles();
                __p2_recoderStatus = false;

                this->isUseDevice = false;
                this->__p2_hScrollBar->Enabled = true;
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormResize(TObject *Sender)
{
    this->Panel1->Width = this->Width - 15;
    this->Panel2->Width = this->Panel1->Width;

    this->Panel1->Height = this->Height - 100;
    this->Panel2->Height = this->Panel1->Height;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::__p2_LineChartChange(TObject *Sender)
{
    double Ta = ((TimeGain[__p2_BaseSeampleFreqIndx] / (double)this->__p2_LineChart->Width) * this->__p2_LineChart->MarkerA.RealPosition) * this->__p2_timeFactor->Value;
    this->__p2_Ta->Caption = "Ta: " + AnsiString(Ta);
    double Tb = ((TimeGain[__p2_BaseSeampleFreqIndx] / (double)this->__p2_LineChart->Width) * this->__p2_LineChart->MarkerB.RealPosition) * this->__p2_timeFactor->Value;
    this->__p2_Tb->Caption = "Tb: " + AnsiString(Tb);
    this->__p2_Tba->Caption = "Tb-a: " + AnsiString(Tb - Ta);
    double Fba = 0;
    if((Tb - Ta) != 0)
     Fba = (1 / (Tb - Ta)) * 1000.0;
    this->__p2_Fba->Caption = "Fb-a: " + AnsiString(Fba);
    this->__p2_Ignba->Caption = "IGNb-a: " + AnsiString((Fba / 2) * 60);

    if(this->__p2_LineChart->Seamples > 0)
    {
        double Uach1 = (__p2_lines[0].Data[this->__p2_LineChart->MarkerA.SeamplesPosition] * Divide[Form1->__p2_divA->ItemIndex]) / Multiplie[Form1->__p2_factorA->ItemIndex];
        this->__p2_Uach1->Caption = "Uach1: " + AnsiString(Uach1);
        double Ubch1 = (__p2_lines[0].Data[this->__p2_LineChart->MarkerB.SeamplesPosition] * Divide[Form1->__p2_divB->ItemIndex]) / Multiplie[Form1->__p2_factorB->ItemIndex];
        this->__p2_Ubch1->Caption = "Ubch1: " + AnsiString(Ubch1);
        double Ubach1 = Ubch1 - Uach1;
        this->__p2_Ubach1->Caption = "Ub-ach1: " + AnsiString(Ubach1);

        double Uach2 = (__p2_lines[1].Data[this->__p2_LineChart->MarkerA.SeamplesPosition] * Divide[Form1->__p2_divA->ItemIndex]) / Multiplie[Form1->__p2_factorA->ItemIndex];
        this->__p2_Uach2->Caption = "Uach2: " + AnsiString(Uach2);
        double Ubch2 = (__p2_lines[1].Data[this->__p2_LineChart->MarkerB.SeamplesPosition] * Divide[Form1->__p2_divB->ItemIndex]) / Multiplie[Form1->__p2_factorB->ItemIndex];
        this->__p2_Ubch2->Caption = "Ubch2: " + AnsiString(Ubch2);
        double Ubach2 = Ubch2 - Uach2;
        this->__p2_Ubach2->Caption = "Ub-ach2: " + AnsiString(Ubach2);
    }


    double Uca = ((this->__p2_LineChart->Height / 2) - __p2_lines[0].Offest - ((__p2_vScrollBar->Position - 10) * 100) -  this->__p2_LineChart->MarkerC.RealPosition) * (Gain[Form1->__p2_GainA->ItemIndex] / this->__p2_LineChart->Height);
    Uca = (Uca * Divide[Form1->__p2_divA->ItemIndex]) / Multiplie[Form1->__p2_factorA->ItemIndex];
    if(__p2_invA->Checked) Uca *= -1.0;
    this->__p2_Uca->Caption = "Uca: " + AnsiString(Uca);
    double Ucb = ((this->__p2_LineChart->Height / 2) - __p2_lines[1].Offest - ((__p2_vScrollBar->Position - 10) * 100) -  this->__p2_LineChart->MarkerC.RealPosition) * (Gain[Form1->__p2_GainB->ItemIndex] / this->__p2_LineChart->Height);
    Ucb = (Ucb * Divide[Form1->__p2_divB->ItemIndex]) / Multiplie[Form1->__p2_factorB->ItemIndex];
    if(__p2_invB->Checked) Ucb *= -1.0;
    this->__p2_Ucb->Caption = "Ucb: " + AnsiString(Ucb);
    double Uda = ((this->__p2_LineChart->Height / 2) - __p2_lines[0].Offest - ((__p2_vScrollBar->Position - 10) * 100) -  this->__p2_LineChart->MarkerD.RealPosition) * (Gain[Form1->__p2_GainA->ItemIndex] / this->__p2_LineChart->Height);
    Uda = (Uda * Divide[Form1->__p2_divA->ItemIndex]) / Multiplie[Form1->__p2_factorA->ItemIndex];
    if(__p2_invA->Checked) Uda *= -1.0;
    this->__p2_Uda->Caption = "Uda: " + AnsiString(Uda);
    double Udb = ((this->__p2_LineChart->Height / 2) - __p2_lines[1].Offest - ((__p2_vScrollBar->Position - 10) * 100) -  this->__p2_LineChart->MarkerD.RealPosition) * (Gain[Form1->__p2_GainB->ItemIndex] / this->__p2_LineChart->Height);
    Udb = (Udb * Divide[Form1->__p2_divB->ItemIndex]) / Multiplie[Form1->__p2_factorB->ItemIndex];
    if(__p2_invB->Checked) Udb *= -1.0;
    this->__p2_Udb->Caption = "Udb: " + AnsiString(Udb);


    if(this->__p2_TriggerChannel->ItemIndex == 0)
    {
        if(this->__p2_TriggerType->ItemIndex ==0)
        {
             this->__p2_TriggerLevel->Text = AnsiString(Uca);
        }
        else
        {
             this->__p2_TriggerLevel->Text = AnsiString(Uca-Uda);
        }
    }
    if(this->__p2_TriggerChannel->ItemIndex == 1)
    {
        if(this->__p2_TriggerType->ItemIndex ==0)
        {
             this->__p2_TriggerLevel->Text = AnsiString(Ucb);
        }
        else
        {
             this->__p2_TriggerLevel->Text = AnsiString(Ucb-Udb);
        }
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::__p2_setZeroAClick(TObject *Sender)
{
        __p2_lines[0].Offest = 0;
        __p2_LineChart->Invalidate();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::__p2_setZeroBClick(TObject *Sender)
{
        __p2_lines[1].Offest = 0;
        __p2_LineChart->Invalidate();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::__p2_setViewAClick(TObject *Sender)
{
     __p2_lines[0].Offest = -((avgA / Divide[this->__p2_divA->ItemIndex]) * Multiplie[this->__p2_factorA->ItemIndex]) * (this->__p2_LineChart->Height / Gain[Form1->__p2_GainA->ItemIndex]);
     __p2_LineChart->Invalidate();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::__p2_setViewBClick(TObject *Sender)
{
     __p2_lines[1].Offest = -((avgB / Divide[this->__p2_divB->ItemIndex]) * Multiplie[this->__p2_factorB->ItemIndex]) * (this->__p2_LineChart->Height / Gain[Form1->__p2_GainB->ItemIndex]);
     __p2_LineChart->Invalidate();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::__p2_vScrollBarChange(TObject *Sender)
{
    __p2_LineChart->VerticalOffset = (__p2_vScrollBar->Position - 10) * 100;
    __p2_LineChart->Invalidate();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::__p2_divAChange(TObject *Sender)
{
        __p2_lines[0].Divide = Divide[this->__p2_divA->ItemIndex];
        __p2_LineChart->Invalidate();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::__p2_factorAChange(TObject *Sender)
{
        __p2_lines[0].Scale = Multiplie[Form1->__p2_factorA->ItemIndex];
        __p2_LineChart->Invalidate();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::__p2_divBChange(TObject *Sender)
{
        __p2_lines[1].Divide = Divide[this->__p2_divB->ItemIndex];
        __p2_LineChart->Invalidate();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::__p2_factorBChange(TObject *Sender)
{
        __p2_lines[1].Scale = Multiplie[Form1->__p2_factorB->ItemIndex];
        __p2_LineChart->Invalidate();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::__p2_LineASizeChange(TObject *Sender)
{
        __p2_lines[0].Width = __p2_LineASize->Value;
        __p2_LineChart->Invalidate();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::__p2_LineBSizeChange(TObject *Sender)
{
        __p2_lines[1].Width = __p2_LineBSize->Value;
        __p2_LineChart->Invalidate();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::__p2_TriggerLineSizeChange(TObject *Sender)
{
        __p2_lines[2].Width = __p2_TriggerLineSize->Value;
        __p2_LineChart->Invalidate();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::__p2_hScrollBarChange(TObject *Sender)
{
     __p2_CalculateData();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::__p2_CalculateData()
{
        __p2_hScrollBar->Max = __p2_seampleCount / 100;

                int marker = this->__p2_hScrollBar->Position * 100;
                if((marker+1000) > __p2_seampleCount)
                      return;

                int buffLen = 1000 * this->__p2_timeFactor->Value;
                if(this->__p2_enA->Checked)
                {
                       double* buff = new double[buffLen];
                       this->_IOscilloscope->GetChannelDataArray(A, buff, marker, buffLen, &_r);

                       for(int i=0,j=0; i < 1000; i++)
                       {
                               double value = 0;
                               for(int t=0; t < this->__p2_timeFactor->Value; t++,j++)
                               {
                                        value += buff[j];
                               }
                               if(__p2_invA->Checked)
                               {
                                        __p2_lines[0].Data[i] = (value / this->__p2_timeFactor->Value) * -1.0;
                               }
                               else
                               {
                                        __p2_lines[0].Data[i] = value / this->__p2_timeFactor->Value;
                               }
                       }

                       delete[] buff;
                }
                if(this->__p2_enB->Checked)
                {
                       double* buff = new double[buffLen];
                       this->_IOscilloscope->GetChannelDataArray(B, buff, marker, buffLen, &_r);

                       for(int i=0,j=0; i < 1000; i++)
                       {
                               double value = 0;
                               for(int t=0; t < this->__p2_timeFactor->Value; t++,j++)
                               {
                                        value += buff[j];
                               }
                               if(__p2_invB->Checked)
                               {
                                        __p2_lines[1].Data[i] = (value / this->__p2_timeFactor->Value) * -1.0;
                               }
                               else
                               {
                                        __p2_lines[1].Data[i] = value / this->__p2_timeFactor->Value;
                               }
                       }

                       delete[] buff;
                }
                if(this->__p2_TriggerEn->Checked)
                {
                       for(int i=0; i<1000; i++)
                                __p2_lines[2].Data[i] = 0;

                       long mc,cm;
                       this->_IOscilloscope->GetMarkCount(this->__p2_TriggerChannel->ItemIndex, &mc);
                       for(long j=mc-1; j >= 0; j--)
                       {
                           this->_IOscilloscope->GetSyncMark(this->__p2_TriggerChannel->ItemIndex, j, &cm);
                           if(cm > (marker + (1000 * this->__p2_timeFactor->Value))) continue;
                           if(cm < marker) break;
                           int pos = cm-marker;
                           if(pos > 0) pos /= this->__p2_timeFactor->Value;
                           __p2_lines[2].Data[pos] = 1;
                       }
                }
                this->__p2_LineChart->Invalidate();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::__p2_timeFactorChange(TObject *Sender)
{
        __p2_CalculateData();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::_mOpenFileClick(TObject *Sender)
{
        if(!this->OpenDialog1->Execute())
                return;

        TFileStream* fs = NULL;
        LineItem li;
        try
        {
                this->__p2_LineChart->Seamples = 1000;

                fs = new TFileStream(this->OpenDialog1->FileName, fmOpenRead);
                fs->Read(&__p2_seampleCount, sizeof(int));

                //Channel A
                int gainA = 0;
                fs->Read(&gainA, sizeof(int));
                this->__p2_GainA->ItemIndex = gainA;
                int divA = 0;
                fs->Read(&divA, sizeof(int));
                this->__p2_divA->ItemIndex = divA;
                bool enA = false;
                fs->Read(&enA, sizeof(bool));
                this->__p2_enA->Checked = enA;
                int Width = 0;
                fs->Read(&Width, sizeof(int));
                __p2_lines[0].Width = Width;
                int Offest = 0;
                fs->Read(&Offest, sizeof(int));
                __p2_lines[0].Offest = Offest;
                double Gain = 0;
                fs->Read(&Gain, sizeof(double));
                __p2_lines[0].Gain = Gain;
                double Divide = 0;
                fs->Read(&Divide, sizeof(double));
                __p2_lines[0].Divide = Divide;
                double Scale = 0;
                fs->Read(&Scale, sizeof(double));
                __p2_lines[0].Scale = Scale;

                //Channel B
                int gainB = 0;
                fs->Read(&gainB, sizeof(int));
                this->__p2_GainB->ItemIndex = gainB;
                int divB = 0;
                fs->Read(&divB, sizeof(int));
                this->__p2_divB->ItemIndex = divB;
                bool enB = false;
                fs->Read(&enB, sizeof(bool));
                this->__p2_enB->Checked = enB;
                Width = 0;
                fs->Read(&Width, sizeof(int));
                __p2_lines[1].Width = Width;
                Offest = 0;
                fs->Read(&Offest, sizeof(int));
                __p2_lines[1].Offest = Offest;
                Gain = 0;
                fs->Read(&Gain, sizeof(double));
                __p2_lines[1].Gain = Gain;
                Divide = 0;
                fs->Read(&Divide, sizeof(double));
                __p2_lines[1].Divide = Divide;
                Scale = 0;
                fs->Read(&Scale, sizeof(double));
                __p2_lines[1].Scale = Scale;

                //time
                fs->Read(&__p2_BaseSeampleFreqIndx, sizeof(int));
                this->__p2_time->ItemIndex = __p2_BaseSeampleFreqIndx;

                //Save Seamples
                double value[1000];
                int count = __p2_seampleCount / 1000;
                int last = __p2_seampleCount % 1000;
                if(enA)
                {
                        this->_IOscilloscope->SetChannelOnOff(A, On);
                        for(int i=0;i<count;i++)
                        {
                                fs->Read(value, sizeof(double)*1000);
                                this->_IOscilloscope->SetChannelDataArray(A, value, i*1000, 1000, &_r);
                        }
                        fs->Read(value, sizeof(double)*last);
                        this->_IOscilloscope->SetChannelDataArray(A, value, count*1000, last, &_r);
                }
                else
                         this->_IOscilloscope->SetChannelOnOff(A, Off);
                if(enB)
                {
                        this->_IOscilloscope->SetChannelOnOff(B, On);
                        for(int i=0;i<count;i++)
                        {
                                fs->Read(value, sizeof(double)*1000);
                                this->_IOscilloscope->SetChannelDataArray(B, value, i*1000, 1000, &_r);
                        }
                        fs->Read(value, sizeof(double)*last);
                        this->_IOscilloscope->SetChannelDataArray(B, value, count*1000, last, &_r);
                }
                else
                        this->_IOscilloscope->SetChannelOnOff(B, Off);

                this->__p2_LineChart->Lines.clear();
                this->__p2_LineChart->Lines.push_back(&__p2_lines[0]);
                this->__p2_LineChart->Lines.push_back(&__p2_lines[1]);

                //Save Syncro
                bool check = false;
                fs->Read(&check, sizeof(bool));
                this->__p2_TriggerEn->Checked = check;

                if(check)
                {
                        //this->_IOscilloscope->SetImmediateTriggerMode();
                        int triggerChannel = 0;
                        fs->Read(&triggerChannel, sizeof(int));
                        this->__p2_TriggerChannel->ItemIndex = triggerChannel;

                        long mc = 0;
                        fs->Read(&mc, sizeof(long));

                        long mark = 0;
                        for(long i=0; i < mc; i++)
                        {
                            fs->Read(&mark, sizeof(long));
                            this->_IOscilloscope->SetSyncMark(triggerChannel, i, mark);
                        }
                Width = 0;
                fs->Read(&Width, sizeof(int));
                __p2_lines[2].Width = Width;
                Offest = 0;
                fs->Read(&Offest, sizeof(int));
                __p2_lines[2].Offest = Offest;
                Gain = 0;
                fs->Read(&Gain, sizeof(double));
                __p2_lines[2].Gain = Gain;
                Divide = 0;
                fs->Read(&Divide, sizeof(double));
                __p2_lines[2].Divide = Divide;
                Scale = 0;
                fs->Read(&Scale, sizeof(double));
                __p2_lines[2].Scale = Scale;
                        this->__p2_LineChart->Lines.push_back(&__p2_lines[2]);
                }


                this->__p2_hScrollBar->Position = 0;
                this->__p2_CalculateData();
                this->TabbedNotebook1->PageIndex = 1;
                this->TabbedNotebook1->Invalidate();
        }
        catch(...)
        {
                ShowMessage("Cannot open file!");
        }
        delete fs;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::_mSaveFileClick(TObject *Sender)
{
        if(!this->SaveDialog1->Execute())
                return;

        TFileStream* fs = NULL;
        try
        {
                fs = new TFileStream(this->SaveDialog1->FileName, fmCreate);

                int sc = 0;
                this->_IOscilloscope->GetSampleCount(&sc);
                fs->Write(&sc, sizeof(int));

                //Channel A
                int gainA = this->__p2_GainA->ItemIndex;
                fs->Write(&gainA, sizeof(int));
                int divA = this->__p2_divA->ItemIndex;
                fs->Write(&divA, sizeof(int));
                bool enA = this->__p2_enA->Checked;
                fs->Write(&enA, sizeof(bool));
                int Width = __p2_lines[0].Width;
                fs->Write(&Width, sizeof(int));
                int Offest = __p2_lines[0].Offest;
                fs->Write(&Offest, sizeof(int));
                double Gain = __p2_lines[0].Gain;
                fs->Write(&Gain, sizeof(double));
                double Divide = __p2_lines[0].Divide;
                fs->Write(&Divide, sizeof(double));
                double Scale = __p2_lines[0].Scale;
                fs->Write(&Scale, sizeof(double));

                //Channel B
                int gainB = this->__p2_GainB->ItemIndex;
                fs->Write(&gainB, sizeof(int));
                int divB = this->__p2_divB->ItemIndex;
                fs->Write(&divB, sizeof(int));
                bool enB = this->__p2_enB->Checked;
                fs->Write(&enB, sizeof(bool));
                Width = __p2_lines[1].Width;
                fs->Write(&Width, sizeof(int));
                Offest = __p2_lines[1].Offest;
                fs->Write(&Offest, sizeof(int));
                Gain = __p2_lines[1].Gain;
                fs->Write(&Gain, sizeof(double));
                Divide = __p2_lines[1].Divide;
                fs->Write(&Divide, sizeof(double));
                Scale = __p2_lines[1].Scale;
                fs->Write(&Scale, sizeof(double));

                //time
                int timeIndex = this->__p2_time->ItemIndex;
                fs->Write(&timeIndex, sizeof(int));

                //Save Seamples
                double value = 0;
                if(enA)
                for(int i=0;i<sc;i++)
                {
                        this->_IOscilloscope->GetChannelSample(i, A, &value);
                        fs->Write(&value, sizeof(double));
                }
                if(enB)
                for(int i=0;i<sc;i++)
                {
                        this->_IOscilloscope->GetChannelSample(i, B, &value);
                        fs->Write(&value, sizeof(double));
                }

                //Save Syncro
                bool check = this->__p2_TriggerEn->Checked;
                fs->Write(&check, sizeof(bool));

                if(check)
                {
                        int triggerChannel = this->__p2_TriggerChannel->ItemIndex;
                        fs->Write(&triggerChannel, sizeof(int));

                        long mc = 0;
                        this->_IOscilloscope->GetMarkCount(this->__p2_TriggerChannel->ItemIndex, &mc);
                        fs->Write(&mc, sizeof(long));

                        long mark = 0;
                        for(long i=0; i < mc; i++)
                        {
                            this->_IOscilloscope->GetSyncMark(triggerChannel, i, &mark);
                            fs->Write(&mark, sizeof(long));
                        }
                               Width = __p2_lines[2].Width;
                               fs->Write(&Width, sizeof(int));
                               Offest = __p2_lines[2].Offest;
                               fs->Write(&Offest, sizeof(int));
                               Gain = __p2_lines[2].Gain;
                               fs->Write(&Gain, sizeof(double));
                               Divide = __p2_lines[2].Divide;
                               fs->Write(&Divide, sizeof(double));
                               Scale = __p2_lines[2].Scale;
                               fs->Write(&Scale, sizeof(double));
                }
        }
        catch(...)
        {
                ShowMessage("Cannot save file!");
        }
        delete fs;
}
//---------------------------------------------------------------------------

