//---------------------------------------------------------------------------

#ifndef MainFormH
#define MainFormH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Menus.hpp>
#include <ComCtrls.hpp>
#include <DiscoAPI.h>
#include <TabNotBk.hpp>
#include <ExtCtrls.hpp>
#include <Buttons.hpp>
#include "LineChart.h"
#include "BarChart.h"
#include "CSPIN.h"
#include <Dialogs.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TMainMenu *_Menu;
        TMenuItem *_mFile;
        TMenuItem *_mExit;
        TStatusBar *_StatusBar;
        TTabbedNotebook *TabbedNotebook1;
        TPanel *Panel1;
        TGroupBox *GroupBox1;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TCheckBox *__p1_enA;
        TComboBox *__p1_GainA;
        TComboBox *__p1_divA;
        TComboBox *__p1_factorA;
        TButton *__p1_setZeroA;
        TButton *__p1_setViewA;
        TGroupBox *GroupBox2;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
        TCheckBox *__p1_enB;
        TComboBox *__p1_GainB;
        TComboBox *__p1_divB;
        TComboBox *__p1_factorB;
        TButton *__p1_setZeroB;
        TButton *__p1_setViewB;
        TGroupBox *GroupBox3;
        TListBox *__p1_time;
        TGroupBox *GroupBox4;
        TGroupBox *GroupBox5;
        TGroupBox *GroupBox6;
        TGroupBox *GroupBox7;
        TButton *__p1_single;
        TButton *__p1_cyclyc;
        TScrollBar *__p1_vScrollBar;
        TLineChart *__p1_LineChart;
        TCheckBox *__p1_TriggerEn;
        TComboBox *__p1_TriggerChannel;
        TComboBox *__p1_TriggerEdge;
        TComboBox *__p1_TriggerType;
        TEdit *__p1_TriggerLevel;
        TComboBox *__p1_pBuff;
        TLabel *Label11;
        TLabel *__p1_UmaxA;
        TLabel *__p1_UminA;
        TLabel *__p1_UavgA;
        TLabel *__p1_UmaxB;
        TLabel *__p1_UminB;
        TLabel *__p1_UavgB;
        TLabel *__p1_Ta;
        TLabel *__p1_Tb;
        TLabel *__p1_Uach1;
        TLabel *__p1_Ubch1;
        TLabel *__p1_Tba;
        TLabel *__p1_Ubach1;
        TLabel *__p1_Fba;
        TLabel *__p1_Ignba;
        TLabel *__p1_Ubach2;
        TLabel *__p1_Ubch2;
        TLabel *__p1_Uach2;
        TLabel *__p1_Uca;
        TLabel *__p1_Uda;
        TLabel *__p1_Ucb;
        TLabel *__p1_Udb;
        TCSpinEdit *__p1_LineASize;
        TCSpinEdit *__p1_LineBSize;
        TPanel *Panel2;
        TGroupBox *GroupBox8;
        TButton *__p2_recoder;
        TGroupBox *GroupBox9;
        TLabel *__p2_UmaxA;
        TLabel *__p2_UminA;
        TLabel *__p2_UavgA;
        TLabel *__p2_UmaxB;
        TLabel *__p2_UminB;
        TLabel *__p2_UavgB;
        TGroupBox *GroupBox10;
        TLabel *__p2_Ta;
        TLabel *__p2_Tb;
        TLabel *__p2_Uach1;
        TLabel *__p2_Ubch1;
        TLabel *__p2_Tba;
        TLabel *__p2_Ubach1;
        TLabel *__p2_Fba;
        TLabel *__p2_Ignba;
        TLabel *__p2_Ubach2;
        TLabel *__p2_Ubch2;
        TLabel *__p2_Uach2;
        TLabel *__p2_Uca;
        TLabel *__p2_Uda;
        TLabel *__p2_Ucb;
        TLabel *__p2_Udb;
        TGroupBox *GroupBox11;
        TCheckBox *__p2_TriggerEn;
        TComboBox *__p2_TriggerChannel;
        TComboBox *__p2_TriggerEdge;
        TComboBox *__p2_TriggerType;
        TEdit *__p2_TriggerLevel;
        TGroupBox *GroupBox12;
        TListBox *__p2_time;
        TGroupBox *GroupBox13;
        TLabel *Label30;
        TLabel *Label31;
        TLabel *Label32;
        TCheckBox *__p2_enB;
        TComboBox *__p2_GainB;
        TComboBox *__p2_divB;
        TComboBox *__p2_factorB;
        TButton *__p2_setViewB;
        TButton *__p2_SetZeroB;
        TCSpinEdit *__p2_LineBSize;
        TGroupBox *GroupBox14;
        TLabel *Label33;
        TLabel *Label34;
        TLabel *Label35;
        TCheckBox *__p2_enA;
        TComboBox *__p2_GainA;
        TComboBox *__p2_divA;
        TComboBox *__p2_factorA;
        TButton *__p2_setViewA;
        TButton *__p2_setZeroA;
        TCSpinEdit *__p2_LineASize;
        TScrollBar *__p2_vScrollBar;
        TLineChart *__p2_LineChart;
        TScrollBar *__p2_hScrollBar;
        TCSpinEdit *__p2_TriggerLineSize;
        TLabel *Label29;
        TCSpinEdit *__p2_timeFactor;
        TLabel *Label7;
        TMenuItem *_mOpenFile;
        TMenuItem *_mSaveFile;
        TOpenDialog *OpenDialog1;
        TSaveDialog *SaveDialog1;
        TCheckBox *__p1_invA;
        TCheckBox *__p1_invB;
        TCheckBox *__p2_invA;
        TCheckBox *__p2_invB;
        void __fastcall _mExitClick(TObject *Sender);
        void __fastcall __p1_singleClick(TObject *Sender);
        void __fastcall __p1_cyclycClick(TObject *Sender);
        void __fastcall __p1_getStatParam();
        void __fastcall __p1_LineChartChange(TObject *Sender);
        void __fastcall __p1_setZeroAClick(TObject *Sender);
        void __fastcall __p1_setZeroBClick(TObject *Sender);
        void __fastcall __p1_setViewAClick(TObject *Sender);
        void __fastcall __p1_setViewBClick(TObject *Sender);
        void __fastcall __p1_vScrollBarChange(TObject *Sender);
        void __fastcall __p1_divAChange(TObject *Sender);
        void __fastcall __p1_factorAChange(TObject *Sender);
        void __fastcall __p1_divBChange(TObject *Sender);
        void __fastcall __p1_factorBChange(TObject *Sender);
        void __fastcall __p1_LineASizeChange(TObject *Sender);
        void __fastcall __p1_LineBSizeChange(TObject *Sender);
        void __fastcall __p2_recoderClick(TObject *Sender);
        void __fastcall FormResize(TObject *Sender);
        void __fastcall __p2_LineChartChange(TObject *Sender);
        void __fastcall __p2_setZeroAClick(TObject *Sender);
        void __fastcall __p2_setZeroBClick(TObject *Sender);
        void __fastcall __p2_setViewAClick(TObject *Sender);
        void __fastcall __p2_setViewBClick(TObject *Sender);
        void __fastcall __p2_vScrollBarChange(TObject *Sender);
        void __fastcall __p2_divAChange(TObject *Sender);
        void __fastcall __p2_factorAChange(TObject *Sender);
        void __fastcall __p2_divBChange(TObject *Sender);
        void __fastcall __p2_factorBChange(TObject *Sender);
        void __fastcall __p2_LineASizeChange(TObject *Sender);
        void __fastcall __p2_LineBSizeChange(TObject *Sender);
        void __fastcall __p2_TriggerLineSizeChange(TObject *Sender);
        void __fastcall __p2_hScrollBarChange(TObject *Sender);
        void __fastcall __p2_CalculateData();
        void __fastcall __p2_timeFactorChange(TObject *Sender);
        void __fastcall _mOpenFileClick(TObject *Sender);
        void __fastcall _mSaveFileClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
        __fastcall ~TForm1();

        IDevice *_IDevice;
        IOscilloscope *_IOscilloscope;

        bool isUseDevice;
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#include <Classes.hpp>
//---------------------------------------------------------------------------
class Thread : public TThread
{
private:
protected:
        void __fastcall Execute();
        void __fastcall fn1();
        void __fastcall fn2();
        void __fastcall fn3();
        void __fastcall fn4();
public:
        __fastcall Thread();
        __fastcall ~Thread();
        unsigned short fncId;
};
#endif
