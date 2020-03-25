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
LineItem __p3_lines[9];
LineItem __p4_lines[9];
BarItem bars[8];
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

        __p3_lines[0].Data = new double[1000];
        __p3_lines[1].Data = new double[1000];
        __p3_lines[2].Data = new double[1000];
        __p3_lines[3].Data = new double[1000];
        __p3_lines[4].Data = new double[1000];
        __p3_lines[5].Data = new double[1000];
        __p3_lines[6].Data = new double[1000];
        __p3_lines[7].Data = new double[1000];
        __p3_lines[8].Data = new double[1000];

        __p4_lines[0].Data = new double[1000];
        __p4_lines[1].Data = new double[1000];
        __p4_lines[2].Data = new double[1000];
        __p4_lines[3].Data = new double[1000];
        __p4_lines[4].Data = new double[1000];
        __p4_lines[5].Data = new double[1000];
        __p4_lines[6].Data = new double[1000];
        __p4_lines[7].Data = new double[1000];
        __p4_lines[8].Data = new double[1000];

        __p4_lines[8].Gain = 10;
        __p4_lines[8].Scale = 1;
        __p4_lines[8].Divide = 1;
        __p4_lines[8].Color = clGray;
        __p4_lines[8].Width = 2.0;

        __p4_lines[7].Gain = 10;
        __p4_lines[7].Scale = 1;
        __p4_lines[7].Divide = 1;
        __p4_lines[7].Color = clTeal;
        __p4_lines[7].Width = 2.0;

        __p4_lines[6].Gain = 10;
        __p4_lines[6].Scale = 1;
        __p4_lines[6].Divide = 1;
        __p4_lines[6].Color = clPurple;
        __p4_lines[6].Width = 2.0;

        __p4_lines[5].Gain = 10;
        __p4_lines[5].Scale = 1;
        __p4_lines[5].Divide = 1;
        __p4_lines[5].Color = clNavy;
        __p4_lines[5].Width = 2.0;

        __p4_lines[4].Gain = 10;
        __p4_lines[4].Scale = 1;
        __p4_lines[4].Divide = 1;
        __p4_lines[4].Color = clOlive;
        __p4_lines[4].Width = 2.0;

        __p4_lines[3].Gain = 10;
        __p4_lines[3].Scale = 1;
        __p4_lines[3].Divide = 1;
        __p4_lines[3].Color = clMaroon;
        __p4_lines[3].Width = 2.0;

        __p4_lines[2].Gain = 10;
        __p4_lines[2].Scale = 1;
        __p4_lines[2].Divide = 1;
        __p4_lines[2].Color = clGreen;
        __p4_lines[2].Width = 2.0;

        __p4_lines[1].Gain = 10;
        __p4_lines[1].Scale = 1;
        __p4_lines[1].Divide = 1;
        __p4_lines[1].Color = clBlue;
        __p4_lines[1].Width = 2.0;

        __p4_lines[0].Gain = 10;
        __p4_lines[0].Scale = 1;
        __p4_lines[0].Divide = 1;
        __p4_lines[0].Color = clRed;
        __p4_lines[0].Width = 2.0;

        this->DoubleBuffered = true;

        // Initializing Visual Component
        this->Panel1->DoubleBuffered = true;
        this->Panel2->DoubleBuffered = true;
        this->Panel3->DoubleBuffered = true;
        this->Panel4->DoubleBuffered = true;
        this->__p1_LineChart->Anchors = TAnchors() << akLeft << akTop << akRight << akBottom;
        this->__p2_LineChart->Anchors = TAnchors() << akLeft << akTop << akRight << akBottom;
        this->__p3_LineChart->Anchors = TAnchors() << akLeft << akTop << akRight << akBottom;
        this->__p4_LineChart->Anchors = TAnchors() << akLeft << akTop << akRight << akBottom;
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

        delete[] __p3_lines[0].Data;
        delete[] __p3_lines[1].Data;
        delete[] __p3_lines[2].Data;
        delete[] __p3_lines[3].Data;
        delete[] __p3_lines[4].Data;
        delete[] __p3_lines[5].Data;
        delete[] __p3_lines[6].Data;
        delete[] __p3_lines[7].Data;
        delete[] __p3_lines[8].Data;

        delete[] __p4_lines[0].Data;
        delete[] __p4_lines[1].Data;
        delete[] __p4_lines[2].Data;
        delete[] __p4_lines[3].Data;
        delete[] __p4_lines[4].Data;
        delete[] __p4_lines[5].Data;
        delete[] __p4_lines[6].Data;
        delete[] __p4_lines[7].Data;
        delete[] __p4_lines[8].Data;

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
    this->Panel3->Width = this->Panel2->Width;
    this->Panel4->Width = this->Panel3->Width;

    this->Panel1->Height = this->Height - 100;
    this->Panel2->Height = this->Panel1->Height;
    this->Panel3->Height = this->Panel2->Height;
    this->Panel4->Height = this->Panel3->Height;
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
void __fastcall TForm1::__p3_CalculateData()
{
        if(!this->__p3_EnCalculate->Checked)
                return;

        this->__p3_LineChart->Seamples = 1000;
        this->__p3_LineChart->Lines.clear();

        long mc,cm1,cm2;
        this->_IOscilloscope->GetMarkCount(this->__p2_TriggerChannel->ItemIndex, &mc);
        this->__p3_Position->MaxValue = mc - 2;
        this->__p3_LbCount->Caption = AnsiString(mc - 2) + ":";

        this->_IOscilloscope->GetSyncMark(A, this->__p3_Position->Value, &cm1);
        this->_IOscilloscope->GetSyncMark(A, this->__p3_Position->Value + 1, &cm2);

        long _offset = (cm2-cm1) / this->__p3_cylinder->Value;

        switch(this->__p3_cylinder->Value)
        {
                case 9: {
                this->_IOscilloscope->GetChannelDataArray(B, __p3_lines[8].Data, cm1 + _offset * 8-(__p3_PreBuff->Value * 100), 1000, &_r);

                if(__p2_invB->Checked)
                        for(int i=0;i<1000;i++) __p3_lines[8].Data[i] *= -1.0;

                __p3_lines[8].Gain = __p2_lines[1].Gain;
                __p3_lines[8].Scale = __p2_lines[1].Scale;
                __p3_lines[8].Divide = __p2_lines[1].Divide;
                __p3_lines[8].Color = clGray;
                this->__p3_LineChart->Lines.push_back(&__p3_lines[8]);
                }
                case 8: {
                this->_IOscilloscope->GetChannelDataArray(B, __p3_lines[7].Data, cm1 + _offset * 7-(__p3_PreBuff->Value * 100), 1000, &_r);

                if(__p2_invB->Checked)
                        for(int i=0;i<1000;i++) __p3_lines[7].Data[i] *= -1.0;

                __p3_lines[7].Gain = __p2_lines[1].Gain;
                __p3_lines[7].Scale = __p2_lines[1].Scale;
                __p3_lines[7].Divide = __p2_lines[1].Divide;
                __p3_lines[7].Color = clTeal;
                this->__p3_LineChart->Lines.push_back(&__p3_lines[7]);
                }
                case 7: {
                this->_IOscilloscope->GetChannelDataArray(B, __p3_lines[6].Data, cm1 + _offset * 6-(__p3_PreBuff->Value * 100), 1000, &_r);

                if(__p2_invB->Checked)
                        for(int i=0;i<1000;i++) __p3_lines[6].Data[i] *= -1.0;

                __p3_lines[6].Gain = __p2_lines[1].Gain;
                __p3_lines[6].Scale = __p2_lines[1].Scale;
                __p3_lines[6].Divide = __p2_lines[1].Divide;
                __p3_lines[6].Color = clPurple;
                this->__p3_LineChart->Lines.push_back(&__p3_lines[6]);
                }
                case 6: {
                this->_IOscilloscope->GetChannelDataArray(B, __p3_lines[5].Data, cm1 + _offset * 5-(__p3_PreBuff->Value * 100), 1000, &_r);

                if(__p2_invB->Checked)
                        for(int i=0;i<1000;i++) __p3_lines[5].Data[i] *= -1.0;

                __p3_lines[5].Gain = __p2_lines[1].Gain;
                __p3_lines[5].Scale = __p2_lines[1].Scale;
                __p3_lines[5].Divide = __p2_lines[1].Divide;
                __p3_lines[5].Color = clNavy;
                this->__p3_LineChart->Lines.push_back(&__p3_lines[5]);
                }
                case 5: {
                this->_IOscilloscope->GetChannelDataArray(B, __p3_lines[4].Data, cm1 + _offset * 4-(__p3_PreBuff->Value * 100), 1000, &_r);

                if(__p2_invB->Checked)
                        for(int i=0;i<1000;i++) __p3_lines[4].Data[i] *= -1.0;

                __p3_lines[4].Gain = __p2_lines[1].Gain;
                __p3_lines[4].Scale = __p2_lines[1].Scale;
                __p3_lines[4].Divide = __p2_lines[1].Divide;
                __p3_lines[4].Color = clOlive;
                this->__p3_LineChart->Lines.push_back(&__p3_lines[4]);
                }
                case 4: {
                this->_IOscilloscope->GetChannelDataArray(B, __p3_lines[3].Data, cm1 + _offset * 3-(__p3_PreBuff->Value * 100), 1000, &_r);

                if(__p2_invB->Checked)
                        for(int i=0;i<1000;i++) __p3_lines[3].Data[i] *= -1.0;

                __p3_lines[3].Gain = __p2_lines[1].Gain;
                __p3_lines[3].Scale = __p2_lines[1].Scale;
                __p3_lines[3].Divide = __p2_lines[1].Divide;
                __p3_lines[3].Color = clMaroon;
                this->__p3_LineChart->Lines.push_back(&__p3_lines[3]);
                }
                case 3: {
                this->_IOscilloscope->GetChannelDataArray(B, __p3_lines[2].Data, cm1 + _offset * 2 -(__p3_PreBuff->Value * 100), 1000, &_r);

                if(__p2_invB->Checked)
                        for(int i=0;i<1000;i++) __p3_lines[2].Data[i] *= -1.0;

                __p3_lines[2].Gain = __p2_lines[1].Gain;
                __p3_lines[2].Scale = __p2_lines[1].Scale;
                __p3_lines[2].Divide = __p2_lines[1].Divide;
                __p3_lines[2].Color = clGreen;
                this->__p3_LineChart->Lines.push_back(&__p3_lines[2]);
                }
                case 2: {
                this->_IOscilloscope->GetChannelDataArray(B, __p3_lines[1].Data, cm1 + _offset-(__p3_PreBuff->Value * 100), 1000, &_r);

                if(__p2_invB->Checked)
                        for(int i=0;i<1000;i++) __p3_lines[1].Data[i] *= -1.0;

                __p3_lines[1].Gain = __p2_lines[1].Gain;
                __p3_lines[1].Scale = __p2_lines[1].Scale;
                __p3_lines[1].Divide = __p2_lines[1].Divide;
                __p3_lines[1].Color = clBlue;
                this->__p3_LineChart->Lines.push_back(&__p3_lines[1]);
                this->_IOscilloscope->GetChannelDataArray(B, __p3_lines[0].Data, cm1-(__p3_PreBuff->Value * 100), 1000, &_r);

                if(__p2_invB->Checked)
                        for(int i=0;i<1000;i++) __p3_lines[0].Data[i] *= -1.0;

                __p3_lines[0].Gain = __p2_lines[1].Gain;
                __p3_lines[0].Scale = __p2_lines[1].Scale;
                __p3_lines[0].Divide = __p2_lines[1].Divide;
                __p3_lines[0].Color = clRed;
                this->__p3_LineChart->Lines.push_back(&__p3_lines[0]);
                }; break;
        }

        this->__p3_LineChart->Invalidate();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::__p3_cylinderChange(TObject *Sender)
{
        this->__p3_CalculateData();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::__p3_PositionChange(TObject *Sender)
{
        this->__p3_CalculateData();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::__p3_EnCalculateClick(TObject *Sender)
{
        this->__p3_CalculateData();

        int offset = this->__p3_LineChart->Height / (this->__p3_cylinder->Value + 1);
        for(int i=0; i < this->__p3_cylinder->Value; i++)
              __p3_lines[i].Offest = (this->__p3_LineChart->Height / 2) - offset * (i + 1);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::__p3_LineChartChange(TObject *Sender)
{
    double Ta = ((TimeGain[__p2_BaseSeampleFreqIndx] / (double)this->__p3_LineChart->Width) * this->__p3_LineChart->MarkerA.RealPosition) * this->__p2_timeFactor->Value;
    this->__p3_Ta->Caption = AnsiString(Ta);
    double Tb = ((TimeGain[__p2_BaseSeampleFreqIndx] / (double)this->__p3_LineChart->Width) * this->__p3_LineChart->MarkerB.RealPosition) * this->__p2_timeFactor->Value;
    this->__p3_Tb->Caption = AnsiString(Tb);
    this->__p3_Tba->Caption = AnsiString(Tb - Ta);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::__p3_vScrollBarChange(TObject *Sender)
{
        __p3_LineChart->VerticalOffset = (__p3_vScrollBar->Position - 10) * 100;
        __p3_LineChart->Invalidate();
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
void __fastcall TForm1::__p4_CalculateData()
{
        int markerPosition = this->__p2_LineChart->MarkerA.SeamplesPosition + this->__p2_hScrollBar->Position * 100;
        long mc = 0;
        this->_IOscilloscope->GetMarkCount(this->__p2_TriggerChannel->ItemIndex, &mc);
        if(mc == 0)
                return;

        for(int i=0; i < 8; i++)
                for(int j=0; j<1000; j++)
                     __p4_lines[i].Data[j] = 0;

        long prevmark, mark;
        prevmark = mark = 0;
        long cyl = 0;
        for(long i=0; i < mc && i < 1000; i++)
        {
               this->_IOscilloscope->GetSyncMark(this->__p2_TriggerChannel->ItemIndex, i, &mark);
               if(mark < markerPosition)
                        continue;

               switch(cyl++)
               {
                        case 0: __p4_lines[0].Data[i] = 1 / (double)(mark - prevmark);
                        if(i > this->__p4_cylinder->Value-1)
                        {
                                double _k = (__p4_lines[0].Data[i] - __p4_lines[0].Data[i - __p4_cylinder->Value]) / (double)(__p4_cylinder->Value);
                                for(int j=i-1; j > i - this->__p4_cylinder->Value; j--)
                                {
                                    __p4_lines[0].Data[j] = __p4_lines[0].Data[j + 1] - _k;
                                }
                        }
                        break;
                        case 1: __p4_lines[1].Data[i] = 1 / (double)(mark - prevmark);
                        if(i > this->__p4_cylinder->Value-1)
                        {
                                double _k = (__p4_lines[1].Data[i] - __p4_lines[1].Data[i - __p4_cylinder->Value]) / (double)(__p4_cylinder->Value);
                                for(int j=i-1; j > i - this->__p4_cylinder->Value; j--)
                                {
                                    __p4_lines[1].Data[j] = __p4_lines[1].Data[j + 1] - _k;
                                }
                        }
                        break;
                        case 2: __p4_lines[2].Data[i] = 1 / (double)(mark - prevmark);
                        if(i > this->__p4_cylinder->Value-1)
                        {
                                double _k = (__p4_lines[2].Data[i] - __p4_lines[2].Data[i - __p4_cylinder->Value]) / (double)(__p4_cylinder->Value);
                                for(int j=i-1; j > i - this->__p4_cylinder->Value; j--)
                                {
                                    __p4_lines[2].Data[j] = __p4_lines[2].Data[j + 1] - _k;
                                }
                        }
                        break;
                        case 3: __p4_lines[3].Data[i] = 1 / (double)(mark - prevmark);
                        if(i > this->__p4_cylinder->Value-1)
                        {
                                double _k = (__p4_lines[3].Data[i] - __p4_lines[3].Data[i - __p4_cylinder->Value]) / (double)(__p4_cylinder->Value);
                                for(int j=i-1; j > i - this->__p4_cylinder->Value; j--)
                                {
                                    __p4_lines[3].Data[j] = __p4_lines[3].Data[j + 1] - _k;
                                }
                        }
                        break;
                        case 4: __p4_lines[4].Data[i] = 1 / (double)(mark - prevmark);
                        if(i > this->__p4_cylinder->Value-1)
                        {
                                double _k = (__p4_lines[4].Data[i] - __p4_lines[4].Data[i - __p4_cylinder->Value]) / (double)(__p4_cylinder->Value);
                                for(int j=i-1; j > i - this->__p4_cylinder->Value; j--)
                                {
                                    __p4_lines[4].Data[j] = __p4_lines[4].Data[j + 1] - _k;
                                }
                        }
                        break;
                        case 5: __p4_lines[5].Data[i] = 1 / (double)(mark - prevmark);
                        if(i > this->__p4_cylinder->Value-1)
                        {
                                double _k = (__p4_lines[5].Data[i] - __p4_lines[5].Data[i - __p4_cylinder->Value]) / (double)(__p4_cylinder->Value);
                                for(int j=i-1; j > i - this->__p4_cylinder->Value; j--)
                                {
                                    __p4_lines[5].Data[j] = __p4_lines[5].Data[j + 1] - _k;
                                }
                        }
                        break;
                        case 6: __p4_lines[6].Data[i] = 1 / (double)(mark - prevmark);
                        if(i > this->__p4_cylinder->Value-1)
                        {
                                double _k = (__p4_lines[6].Data[i] - __p4_lines[6].Data[i - __p4_cylinder->Value]) / (double)(__p4_cylinder->Value);
                                for(int j=i-1; j > i - this->__p4_cylinder->Value; j--)
                                {
                                    __p4_lines[6].Data[j] = __p4_lines[6].Data[j + 1] - _k;
                                }
                        }
                        break;
                        case 7: __p4_lines[7].Data[i] = 1 / (double)(mark - prevmark);
                        if(i > this->__p4_cylinder->Value-1)
                        {
                                double _k = (__p4_lines[7].Data[i] - __p4_lines[7].Data[i - __p4_cylinder->Value]) / (double)(__p4_cylinder->Value);
                                for(int j=i-1; j > i - this->__p4_cylinder->Value; j--)
                                {
                                    __p4_lines[7].Data[j] = __p4_lines[7].Data[j + 1] - _k;
                                }
                        }
                        break;
                        case 8: __p4_lines[8].Data[i] = 1 / (double)(mark - prevmark);
                        if(i > this->__p4_cylinder->Value-1)
                        {
                                double _k = (__p4_lines[8].Data[i] - __p4_lines[8].Data[i - __p4_cylinder->Value]) / (double)(__p4_cylinder->Value);
                                for(int j=i-1; j > i - this->__p4_cylinder->Value; j--)
                                {
                                    __p4_lines[8].Data[j] = __p4_lines[8].Data[j + 1] - _k;
                                }
                        }
                        break;
               }
               prevmark = mark;
               if(cyl == this->__p4_cylinder->Value)
                        cyl = 0;
        }

        this->__p4_LineChart->Seamples = (mc < 1000 ? mc : 1000);
        this->__p4_LineChart->Lines.clear();
        switch(this->__p4_cylinder->Value)
        {
                        case 9: this->__p4_LineChart->Lines.push_back(&__p4_lines[8]);
                        case 8: this->__p4_LineChart->Lines.push_back(&__p4_lines[7]);
                        case 7: this->__p4_LineChart->Lines.push_back(&__p4_lines[6]);
                        case 6: this->__p4_LineChart->Lines.push_back(&__p4_lines[5]);
                        case 5: this->__p4_LineChart->Lines.push_back(&__p4_lines[4]);
                        case 4: this->__p4_LineChart->Lines.push_back(&__p4_lines[3]);
                        case 3: this->__p4_LineChart->Lines.push_back(&__p4_lines[2]);
                        case 2: this->__p4_LineChart->Lines.push_back(&__p4_lines[0]); this->__p4_LineChart->Lines.push_back(&__p4_lines[1]); break;
        }
        this->__p4_LineChart->Invalidate();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::__p4_RefreshClick(TObject *Sender)
{
        __p4_CalculateData();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::__p4_cylinderChange(TObject *Sender)
{
        __p4_CalculateData();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::__p4_GainChange(TObject *Sender)
{
        __p4_lines[0].Gain = this->__p4_Gain->Value / 1000.0;
        __p4_lines[1].Gain = this->__p4_Gain->Value / 1000.0;
        __p4_lines[2].Gain = this->__p4_Gain->Value / 1000.0;
        __p4_lines[3].Gain = this->__p4_Gain->Value / 1000.0;
        __p4_lines[4].Gain = this->__p4_Gain->Value / 1000.0;
        __p4_lines[5].Gain = this->__p4_Gain->Value / 1000.0;
        __p4_lines[6].Gain = this->__p4_Gain->Value / 1000.0;
        __p4_lines[7].Gain = this->__p4_Gain->Value / 1000.0;
        __p4_lines[8].Gain = this->__p4_Gain->Value / 1000.0;
        __p4_CalculateData();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::__p4_vScrollBarChange(TObject *Sender)
{
        this->__p4_LineChart->VerticalOffset = (this->__p4_vScrollBar->Position - 10) * 100;
        this->__p4_LineChart->Invalidate();        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::__p4_OffsetChange(TObject *Sender)
{
        __p4_lines[0].Offest = this->__p4_Offset->Value;
        __p4_lines[1].Offest = this->__p4_Offset->Value;
        __p4_lines[2].Offest = this->__p4_Offset->Value;
        __p4_lines[3].Offest = this->__p4_Offset->Value;
        __p4_lines[4].Offest = this->__p4_Offset->Value;
        __p4_lines[5].Offest = this->__p4_Offset->Value;
        __p4_lines[6].Offest = this->__p4_Offset->Value;
        __p4_lines[7].Offest = this->__p4_Offset->Value;
        __p4_lines[8].Offest = this->__p4_Offset->Value;
        __p4_CalculateData();
}
//---------------------------------------------------------------------------

