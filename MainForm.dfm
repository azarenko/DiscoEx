object Form1: TForm1
  Left = 232
  Top = 167
  Width = 979
  Height = 650
  Caption = 'DiscoEx by Azarenko S.A.'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Icon.Data = {
    0000010001001010000001002000680400001600000028000000100000002000
    0000010020000000000000040000100B0000100B000000000000000000006544
    4CEF65444CFF65444CFF65444CFF65444CFF65444CFF65444CFF65444CFF6544
    4CFF65444CFF65444CFF65444CFF65444CFF65444CFF65444CEFFFFFFF006544
    4CFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF7F7F7FFFFFFF
    FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF65444CFFFFFFFF006544
    4CFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFBFBFBFFFFFFF
    FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF65444CFFFFFFFF006544
    4CFFFFFEFEFFFFFEFEFFFFFEFEFFFFFEFEFFFFFEFEFFFFFEFEFF7F7F7FFFBF78
    0BFFBC7200FFFFFEFEFFFFFEFEFFFFFEFEFFFFFEFEFF65444CFFFFFFFF006544
    4CFFFFFFFFFFFDFCFCFFFDFCFCFFFDFCFCFFFDFCFCFFFDFCFCFFC38019FFFDFC
    FCFFFDFCFCFFBC7200FFFDFCFCFFFDFCFCFFFDFCFCFF65444CFFFFFFFF006544
    4CFFFFFEFEFFFCFAFAFFFCFAFAFFFCFAFAFFFCFAFAFFFCFAFAFFC27F19FFFCFA
    FAFFFCFAFAFFBC7200FFFCFAFAFFFCFAFAFFFCFAFAFF65444CFFFFFFFF006544
    4CFFBF8080FFFBF8F8FFFBF8F8FFFBF8F8FFFBF8F8FFC8892AFFBFBFBFFFFBF8
    F8FFFBF8F8FFFBF8F8FFBC7200FFFBF8F8FFFBF8F8FF65444CFFFFFFFF006544
    4CFFBF8080FFBFBFBFFF7F7F7FFFBFBFBFFF7F7F7FFFC78A2BFF7F7F7FFFBFBF
    BFFF7F7F7FFFBFBFBFFFBC7200FFBFBFBFFF7F7F7FFF65444CFFFFFFFF006544
    4CFFBF8080FFF8F3F3FFF8F3F3FFF8F3F3FFF8F3F3FFC8892AFFBFBFBFFFF8F3
    F3FFF8F3F3FFF8F3F3FFBC7200FFF8F3F3FFF8F3F3FF65444CFFFFFFFF006544
    4CFFFDFCFCFFDEB880FFF6F1F1FFF6F1F1FFCC943EFFF6F1F1FF7F7F7FFFF6F1
    F1FFF6F1F1FFF6F1F1FFF6F1F1FFBC7200FFF6F1F1FF65444CFFFFFFFF006544
    4CFFFDFBFBFFDDB97FFFF5EEEEFFF5EEEEFFCC953EFFF5EEEEFFBFBFBFFFF5EE
    EEFFF5EEEEFFF5EEEEFFF5EEEEFFBC7200FFF5EEEEFF65444CFFFFFFFF006544
    4CFFFDFBFBFFF4ECECFFD8AC69FFD19F53FFF4ECECFFF4ECECFF7F7F7FFFF4EC
    ECFFF4ECECFFF4ECECFFF4ECECFFF4ECECFFBC7200FF65444CFFFFFFFF006544
    4CFFFCFAFAFFF2EAEAFFF2EAEAFFF2EAEAFFF2EAEAFFF2EAEAFFBFBFBFFFF2EA
    EAFFF2EAEAFFF2EAEAFFF2EAEAFFF2EAEAFFF2EAEAFF65444CFFFFFFFF006544
    4CFFFDFBFBFFF8F5F5FFF8F5F5FFF8F5F5FFFCFAFAFFFCFAFAFFBFBFBFFFFCFA
    FAFFFCFAFAFFFCFAFAFFFCFAFAFFFCFAFAFFF8F5F5FF65444CFFFFFFFF006544
    4CEF65444CFF65444CFF65444CFF65444CFF65444CFF65444CFF65444CFF6544
    4CFF65444CFF65444CFF65444CFF65444CFF65444CFF65444CEFFFFFFF00FFFF
    FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
    FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF000001
    0000000100000001000000010000000100000001000000010000000100000001
    0000000100000001000000010000000100000001000000010000FFFF0000}
  Menu = _Menu
  OldCreateOrder = False
  Position = poScreenCenter
  OnResize = FormResize
  DesignSize = (
    971
    596)
  PixelsPerInch = 96
  TextHeight = 13
  object _StatusBar: TStatusBar
    Left = 0
    Top = 577
    Width = 971
    Height = 19
    Panels = <
      item
        Text = '...'
        Width = 50
      end>
    SimplePanel = False
  end
  object TabbedNotebook1: TTabbedNotebook
    Left = -2
    Top = -2
    Width = 972
    Height = 583
    Anchors = [akLeft, akTop, akRight, akBottom]
    TabFont.Charset = DEFAULT_CHARSET
    TabFont.Color = clBtnText
    TabFont.Height = -11
    TabFont.Name = 'MS Sans Serif'
    TabFont.Style = []
    TabOrder = 1
    object TTabPage
      Left = 4
      Top = 24
      Caption = #1054#1089#1094#1080#1083#1083#1086#1075#1088#1072#1092
      object Panel1: TPanel
        Left = -3
        Top = 1
        Width = 968
        Height = 556
        TabOrder = 0
        DesignSize = (
          968
          556)
        object __p1_LineChart: TLineChart
          Left = 3
          Top = 0
          Width = 950
          Height = 433
          OnChange = __p1_LineChartChange
        end
        object GroupBox1: TGroupBox
          Left = 2
          Top = 435
          Width = 161
          Height = 115
          Anchors = [akLeft, akBottom]
          Caption = #1050#1072#1085#1072#1083' '#1040
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clRed
          Font.Height = -11
          Font.Name = 'MS Sans Serif'
          Font.Style = [fsBold]
          ParentFont = False
          TabOrder = 0
          object Label1: TLabel
            Left = 8
            Top = 49
            Width = 59
            Height = 13
            Caption = #1042#1093'. '#1091#1088#1086#1074#1077#1085#1100
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -8
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ParentFont = False
          end
          object Label2: TLabel
            Left = 8
            Top = 73
            Width = 65
            Height = 13
            Caption = #1042#1093'. '#1076#1077#1083#1080#1090#1077#1083#1100
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -8
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ParentFont = False
          end
          object Label3: TLabel
            Left = 8
            Top = 97
            Width = 46
            Height = 13
            Caption = #1052#1072#1089#1096#1090#1072#1073
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -8
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ParentFont = False
          end
          object __p1_enA: TCheckBox
            Left = 7
            Top = 16
            Width = 42
            Height = 17
            Caption = #1040#1082#1090'.'
            Checked = True
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -8
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ParentFont = False
            State = cbChecked
            TabOrder = 0
          end
          object __p1_GainA: TComboBox
            Left = 96
            Top = 40
            Width = 57
            Height = 21
            AutoComplete = False
            Style = csDropDownList
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -8
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ItemHeight = 13
            ItemIndex = 0
            ParentFont = False
            TabOrder = 1
            Text = '+/-10'
            Items.Strings = (
              '+/-10'
              '+/-1')
          end
          object __p1_divA: TComboBox
            Left = 96
            Top = 64
            Width = 57
            Height = 21
            Style = csDropDownList
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -8
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ItemHeight = 13
            ItemIndex = 0
            ParentFont = False
            TabOrder = 2
            Text = '1:1'
            OnChange = __p1_divAChange
            Items.Strings = (
              '1:1'
              '1:2'
              '1:10'
              '1:50')
          end
          object __p1_factorA: TComboBox
            Left = 96
            Top = 88
            Width = 57
            Height = 21
            Style = csDropDownList
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -8
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ItemHeight = 13
            ItemIndex = 3
            ParentFont = False
            TabOrder = 3
            Text = '1:1'
            OnChange = __p1_factorAChange
            Items.Strings = (
              '10:1'
              '5:1'
              '2:1'
              '1:1'
              '1:2'
              '1:5'
              '1:10'
              '1:20'
              '1:50'
              '1:100')
          end
          object __p1_setZeroA: TButton
            Left = 103
            Top = 9
            Width = 25
            Height = 25
            Caption = '0'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clBlack
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ParentFont = False
            TabOrder = 4
            OnClick = __p1_setZeroAClick
          end
          object __p1_setViewA: TButton
            Left = 131
            Top = 9
            Width = 25
            Height = 25
            Caption = '~'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clBlack
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ParentFont = False
            TabOrder = 5
            OnClick = __p1_setViewAClick
          end
          object __p1_LineASize: TCSpinEdit
            Left = 60
            Top = 11
            Width = 41
            Height = 22
            MaxValue = 4
            MinValue = 1
            TabOrder = 6
            Value = 1
            OnChange = __p1_LineASizeChange
          end
          object __p1_invA: TCheckBox
            Left = 6
            Top = 31
            Width = 51
            Height = 17
            Caption = #1048#1085#1074'.'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clBlack
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Style = [fsBold]
            ParentFont = False
            TabOrder = 7
          end
        end
        object GroupBox2: TGroupBox
          Left = 163
          Top = 435
          Width = 161
          Height = 115
          Anchors = [akLeft, akBottom]
          Caption = #1050#1072#1085#1072#1083' B'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlue
          Font.Height = -11
          Font.Name = 'MS Sans Serif'
          Font.Style = [fsBold]
          ParentFont = False
          TabOrder = 1
          object Label4: TLabel
            Left = 8
            Top = 48
            Width = 59
            Height = 13
            Caption = #1042#1093'. '#1091#1088#1086#1074#1077#1085#1100
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -8
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ParentFont = False
          end
          object Label5: TLabel
            Left = 8
            Top = 72
            Width = 65
            Height = 13
            Caption = #1042#1093'. '#1076#1077#1083#1080#1090#1077#1083#1100
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -8
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ParentFont = False
          end
          object Label6: TLabel
            Left = 8
            Top = 96
            Width = 46
            Height = 13
            Caption = #1052#1072#1089#1096#1090#1072#1073
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -8
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ParentFont = False
          end
          object __p1_enB: TCheckBox
            Left = 8
            Top = 16
            Width = 42
            Height = 17
            Caption = #1040#1082#1090'.'
            Checked = True
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -8
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ParentFont = False
            State = cbChecked
            TabOrder = 0
          end
          object __p1_GainB: TComboBox
            Left = 96
            Top = 40
            Width = 57
            Height = 21
            AutoComplete = False
            Style = csDropDownList
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -8
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ItemHeight = 13
            ItemIndex = 0
            ParentFont = False
            TabOrder = 1
            Text = '+/-10'
            Items.Strings = (
              '+/-10'
              '+/-1')
          end
          object __p1_divB: TComboBox
            Left = 96
            Top = 64
            Width = 57
            Height = 21
            Style = csDropDownList
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -8
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ItemHeight = 13
            ItemIndex = 0
            ParentFont = False
            TabOrder = 2
            Text = '1:1'
            OnChange = __p1_divBChange
            Items.Strings = (
              '1:1'
              '1:2'
              '1:10'
              '1:50')
          end
          object __p1_factorB: TComboBox
            Left = 96
            Top = 88
            Width = 57
            Height = 21
            Style = csDropDownList
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -8
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ItemHeight = 13
            ItemIndex = 3
            ParentFont = False
            TabOrder = 3
            Text = '1:1'
            OnChange = __p1_factorBChange
            Items.Strings = (
              '10:1'
              '5:1'
              '2:1'
              '1:1'
              '1:2'
              '1:5'
              '1:10'
              '1:20'
              '1:50'
              '1:100')
          end
          object __p1_setZeroB: TButton
            Left = 103
            Top = 9
            Width = 25
            Height = 25
            Caption = '0'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clBlack
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ParentFont = False
            TabOrder = 4
            OnClick = __p1_setZeroBClick
          end
          object __p1_setViewB: TButton
            Left = 131
            Top = 9
            Width = 25
            Height = 25
            Caption = '~'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clBlack
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ParentFont = False
            TabOrder = 5
            OnClick = __p1_setViewBClick
          end
          object __p1_LineBSize: TCSpinEdit
            Left = 60
            Top = 11
            Width = 41
            Height = 22
            MaxValue = 4
            MinValue = 1
            TabOrder = 6
            Value = 1
            OnChange = __p1_LineBSizeChange
          end
          object __p1_invB: TCheckBox
            Left = 8
            Top = 32
            Width = 49
            Height = 17
            Caption = #1048#1085#1074'.'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clBlack
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Style = [fsBold]
            ParentFont = False
            TabOrder = 7
          end
        end
        object GroupBox3: TGroupBox
          Left = 324
          Top = 435
          Width = 91
          Height = 115
          Anchors = [akLeft, akBottom]
          Caption = #1042#1088#1077#1084#1103'/'#1076#1077#1083
          TabOrder = 2
          DesignSize = (
            91
            115)
          object __p1_time: TListBox
            Left = 5
            Top = 13
            Width = 82
            Height = 97
            Anchors = [akLeft, akTop, akRight, akBottom]
            ItemHeight = 13
            Items.Strings = (
              '1 '#1084#1089
              '2 '#1084#1089
              '5 '#1084#1089
              '10 '#1084#1089
              '20 '#1084#1089
              '50 '#1084#1089
              '0.1 '#1089
              '0.2 '#1089)
            TabOrder = 0
          end
        end
        object GroupBox4: TGroupBox
          Left = 415
          Top = 435
          Width = 160
          Height = 115
          Anchors = [akLeft, akBottom]
          Caption = #1057#1080#1085#1093#1088#1086#1085#1080#1079#1072#1094#1080#1103
          TabOrder = 3
          object Label11: TLabel
            Left = 5
            Top = 96
            Width = 74
            Height = 13
            Caption = #1055#1088#1077#1076'. '#1073#1091#1092#1092#1077#1088'.'
          end
          object __p1_TriggerEn: TCheckBox
            Left = 5
            Top = 13
            Width = 96
            Height = 16
            Caption = #1042#1082#1083#1102#1095#1077#1085#1072
            TabOrder = 0
          end
          object __p1_TriggerChannel: TComboBox
            Left = 4
            Top = 28
            Width = 153
            Height = 21
            Style = csDropDownList
            ItemHeight = 13
            ItemIndex = 0
            TabOrder = 1
            Text = #1050#1072#1085#1072#1083' '#1040
            Items.Strings = (
              #1050#1072#1085#1072#1083' '#1040
              #1050#1072#1085#1072#1083' B')
          end
          object __p1_TriggerEdge: TComboBox
            Left = 5
            Top = 48
            Width = 152
            Height = 21
            Style = csDropDownList
            ItemHeight = 13
            ItemIndex = 0
            TabOrder = 2
            Text = '['#1040#1073#1089'.] '#1055#1077#1088#1077#1076#1085#1080#1081' '#1092#1088#1086#1085#1090
            Items.Strings = (
              '['#1040#1073#1089'.] '#1055#1077#1088#1077#1076#1085#1080#1081' '#1092#1088#1086#1085#1090
              '['#1040#1073#1089'.] '#1047#1072#1076#1085#1080#1081' '#1092#1088#1086#1085#1090
              '['#1044#1080#1092'.] '#1055#1077#1088#1077#1076#1085#1080#1081' '#1092#1088#1086#1085#1090
              '['#1044#1080#1092'.] '#1047#1072#1076#1085#1080#1081' '#1092#1088#1086#1085#1090
              '['#1057#1080#1075#1084#1072'] '#1055#1077#1088#1077#1076#1085#1080#1081' '#1092#1088#1086#1085#1090
              '['#1057#1080#1075#1084#1072'] '#1047#1072#1076#1085#1080#1081' '#1092#1088#1086#1085#1090
              '['#1057#1080#1075#1084#1072'] '#1057#1088#1077#1076#1085#1077#1077)
          end
          object __p1_TriggerType: TComboBox
            Left = 5
            Top = 70
            Width = 98
            Height = 21
            Style = csDropDownList
            ItemHeight = 13
            ItemIndex = 0
            TabOrder = 3
            Text = #1052#1072#1088#1082#1077#1088' C'
            Items.Strings = (
              #1052#1072#1088#1082#1077#1088' C'
              #1044#1080#1092#1092'.')
          end
          object __p1_TriggerLevel: TEdit
            Left = 102
            Top = 69
            Width = 51
            Height = 21
            TabOrder = 4
            Text = '0,5'
          end
          object __p1_pBuff: TComboBox
            Left = 112
            Top = 92
            Width = 40
            Height = 21
            Style = csDropDownList
            ItemHeight = 13
            ItemIndex = 1
            TabOrder = 5
            Text = '1'
            Items.Strings = (
              '0'
              '1'
              '2'
              '3'
              '4'
              '5'
              '6'
              '7'
              '8'
              '9')
          end
        end
        object GroupBox5: TGroupBox
          Left = 576
          Top = 435
          Width = 387
          Height = 65
          Anchors = [akLeft, akBottom]
          Caption = #1055#1072#1088#1072#1084#1077#1090#1088#1099' '#1089#1080#1075#1085#1072#1083#1072' '#1087#1086#1076' '#1084#1072#1088#1082#1077#1088#1072#1084#1080
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -11
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 4
          object __p1_Ta: TLabel
            Left = 2
            Top = 16
            Width = 59
            Height = 13
            AutoSize = False
            Caption = 'Ta:'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clRed
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Pitch = fpFixed
            Font.Style = []
            ParentFont = False
          end
          object __p1_Tb: TLabel
            Left = 2
            Top = 30
            Width = 59
            Height = 13
            AutoSize = False
            Caption = 'Tb:'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clBlue
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Pitch = fpFixed
            Font.Style = []
            ParentFont = False
          end
          object __p1_Uach1: TLabel
            Left = 70
            Top = 16
            Width = 66
            Height = 13
            AutoSize = False
            Caption = 'Uach1:'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clRed
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Pitch = fpFixed
            Font.Style = []
            ParentFont = False
          end
          object __p1_Ubch1: TLabel
            Left = 70
            Top = 30
            Width = 66
            Height = 13
            AutoSize = False
            Caption = 'Ubch1:'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clBlue
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Pitch = fpFixed
            Font.Style = []
            ParentFont = False
          end
          object __p1_Tba: TLabel
            Left = 2
            Top = 43
            Width = 63
            Height = 13
            AutoSize = False
            Caption = 'Tb-a:'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clGreen
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Pitch = fpFixed
            Font.Style = []
            ParentFont = False
          end
          object __p1_Ubach1: TLabel
            Left = 70
            Top = 42
            Width = 72
            Height = 13
            AutoSize = False
            Caption = 'Ub-ach1:'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clGreen
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Pitch = fpFixed
            Font.Style = []
            ParentFont = False
          end
          object __p1_Fba: TLabel
            Left = 238
            Top = 41
            Width = 65
            Height = 13
            AutoSize = False
            Caption = 'Fb-a:'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clMaroon
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Pitch = fpFixed
            Font.Style = []
            ParentFont = False
          end
          object __p1_Ignba: TLabel
            Left = 309
            Top = 42
            Width = 75
            Height = 13
            AutoSize = False
            Caption = 'IGNb-a:'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clMaroon
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Pitch = fpFixed
            Font.Style = []
            ParentFont = False
          end
          object __p1_Ubach2: TLabel
            Left = 149
            Top = 42
            Width = 73
            Height = 13
            AutoSize = False
            Caption = 'Ub-ach2:'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clGreen
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Pitch = fpFixed
            Font.Style = []
            ParentFont = False
          end
          object __p1_Ubch2: TLabel
            Left = 149
            Top = 30
            Width = 66
            Height = 13
            AutoSize = False
            Caption = 'Ubch2:'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clBlue
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Pitch = fpFixed
            Font.Style = []
            ParentFont = False
          end
          object __p1_Uach2: TLabel
            Left = 150
            Top = 16
            Width = 66
            Height = 13
            AutoSize = False
            Caption = 'Uach2:'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clRed
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Pitch = fpFixed
            Font.Style = []
            ParentFont = False
          end
          object __p1_Uca: TLabel
            Left = 238
            Top = 16
            Width = 61
            Height = 13
            AutoSize = False
            Caption = 'Uca:'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clPurple
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Pitch = fpFixed
            Font.Style = []
            ParentFont = False
          end
          object __p1_Uda: TLabel
            Left = 238
            Top = 29
            Width = 59
            Height = 13
            AutoSize = False
            Caption = 'Uda:'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clPurple
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Pitch = fpFixed
            Font.Style = []
            ParentFont = False
          end
          object __p1_Ucb: TLabel
            Left = 317
            Top = 18
            Width = 61
            Height = 13
            AutoSize = False
            Caption = 'Ucb:'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clPurple
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Pitch = fpFixed
            Font.Style = []
            ParentFont = False
          end
          object __p1_Udb: TLabel
            Left = 316
            Top = 30
            Width = 59
            Height = 13
            AutoSize = False
            Caption = 'Udb:'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clPurple
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Pitch = fpFixed
            Font.Style = []
            ParentFont = False
          end
        end
        object GroupBox6: TGroupBox
          Left = 576
          Top = 499
          Width = 275
          Height = 50
          Anchors = [akLeft, akBottom]
          Caption = #1054#1073#1097#1080#1077' '#1087#1072#1088#1072#1084#1077#1090#1088#1099
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -9
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 5
          object __p1_UmaxA: TLabel
            Left = 2
            Top = 16
            Width = 66
            Height = 13
            AutoSize = False
            Caption = 'Max:0'
            Color = clBtnFace
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clRed
            Font.Height = -9
            Font.Name = 'MS Sans Serif'
            Font.Pitch = fpFixed
            Font.Style = []
            ParentColor = False
            ParentFont = False
          end
          object __p1_UminA: TLabel
            Left = 76
            Top = 16
            Width = 63
            Height = 13
            AutoSize = False
            Caption = 'Min:0'
            Color = clBtnFace
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clRed
            Font.Height = -9
            Font.Name = 'MS Sans Serif'
            Font.Pitch = fpFixed
            Font.Style = []
            ParentColor = False
            ParentFont = False
          end
          object __p1_UavgA: TLabel
            Left = 150
            Top = 16
            Width = 73
            Height = 13
            AutoSize = False
            Caption = 'Avg:0'
            Color = clBtnFace
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clRed
            Font.Height = -9
            Font.Name = 'MS Sans Serif'
            Font.Pitch = fpFixed
            Font.Style = []
            ParentColor = False
            ParentFont = False
          end
          object __p1_UmaxB: TLabel
            Left = 2
            Top = 32
            Width = 66
            Height = 13
            AutoSize = False
            Caption = 'Max:0'
            Color = clBtnFace
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clBlue
            Font.Height = -9
            Font.Name = 'MS Sans Serif'
            Font.Pitch = fpFixed
            Font.Style = []
            ParentColor = False
            ParentFont = False
          end
          object __p1_UminB: TLabel
            Left = 76
            Top = 32
            Width = 63
            Height = 13
            AutoSize = False
            Caption = 'Min:0'
            Color = clBtnFace
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clBlue
            Font.Height = -9
            Font.Name = 'MS Sans Serif'
            Font.Pitch = fpFixed
            Font.Style = []
            ParentColor = False
            ParentFont = False
          end
          object __p1_UavgB: TLabel
            Left = 150
            Top = 32
            Width = 73
            Height = 13
            AutoSize = False
            Caption = 'Avg:0'
            Color = clBtnFace
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clBlue
            Font.Height = -9
            Font.Name = 'MS Sans Serif'
            Font.Pitch = fpFixed
            Font.Style = []
            ParentColor = False
            ParentFont = False
          end
        end
        object GroupBox7: TGroupBox
          Left = 856
          Top = 499
          Width = 107
          Height = 49
          Anchors = [akLeft, akBottom]
          Caption = #1059#1087#1088#1072#1074#1083#1077#1085#1080#1077
          TabOrder = 6
          object __p1_single: TButton
            Left = 6
            Top = 17
            Width = 45
            Height = 24
            Caption = #1054#1076#1085'.'
            TabOrder = 0
            OnClick = __p1_singleClick
          end
          object __p1_cyclyc: TButton
            Left = 56
            Top = 17
            Width = 45
            Height = 24
            Caption = #1062#1080#1082#1083'.'
            TabOrder = 1
            OnClick = __p1_cyclycClick
          end
        end
        object __p1_vScrollBar: TScrollBar
          Left = 954
          Top = 1
          Width = 12
          Height = 435
          Anchors = [akTop, akRight, akBottom]
          Kind = sbVertical
          Max = 20
          PageSize = 0
          Position = 10
          TabOrder = 7
          OnChange = __p1_vScrollBarChange
        end
      end
    end
    object TTabPage
      Left = 4
      Top = 24
      Caption = #1057#1072#1084#1086#1087#1080#1089#1077#1094
      object Panel2: TPanel
        Left = 1
        Top = -3
        Width = 963
        Height = 558
        Caption = 'Panel2'
        TabOrder = 0
        DesignSize = (
          963
          558)
        object __p2_LineChart: TLineChart
          Left = 0
          Top = 3
          Width = 948
          Height = 426
          OnChange = __p2_LineChartChange
        end
        object GroupBox8: TGroupBox
          Left = 854
          Top = 510
          Width = 107
          Height = 49
          Anchors = [akLeft, akBottom]
          Caption = #1059#1087#1088#1072#1074#1083#1077#1085#1080#1077
          TabOrder = 0
          object __p2_recoder: TButton
            Left = 8
            Top = 17
            Width = 93
            Height = 24
            Caption = #1048#1079#1084#1077#1088#1077#1085#1080#1077
            TabOrder = 0
            OnClick = __p2_recoderClick
          end
        end
        object GroupBox9: TGroupBox
          Left = 575
          Top = 509
          Width = 275
          Height = 50
          Anchors = [akLeft, akBottom]
          Caption = #1054#1073#1097#1080#1077' '#1087#1072#1088#1072#1084#1077#1090#1088#1099
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -9
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 1
          object __p2_UmaxA: TLabel
            Left = 2
            Top = 16
            Width = 66
            Height = 13
            AutoSize = False
            Caption = 'Max:0'
            Color = clBtnFace
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clRed
            Font.Height = -9
            Font.Name = 'MS Sans Serif'
            Font.Pitch = fpFixed
            Font.Style = []
            ParentColor = False
            ParentFont = False
          end
          object __p2_UminA: TLabel
            Left = 76
            Top = 16
            Width = 63
            Height = 13
            AutoSize = False
            Caption = 'Min:0'
            Color = clBtnFace
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clRed
            Font.Height = -9
            Font.Name = 'MS Sans Serif'
            Font.Pitch = fpFixed
            Font.Style = []
            ParentColor = False
            ParentFont = False
          end
          object __p2_UavgA: TLabel
            Left = 150
            Top = 16
            Width = 73
            Height = 13
            AutoSize = False
            Caption = 'Avg:0'
            Color = clBtnFace
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clRed
            Font.Height = -9
            Font.Name = 'MS Sans Serif'
            Font.Pitch = fpFixed
            Font.Style = []
            ParentColor = False
            ParentFont = False
          end
          object __p2_UmaxB: TLabel
            Left = 2
            Top = 32
            Width = 66
            Height = 13
            AutoSize = False
            Caption = 'Max:0'
            Color = clBtnFace
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clBlue
            Font.Height = -9
            Font.Name = 'MS Sans Serif'
            Font.Pitch = fpFixed
            Font.Style = []
            ParentColor = False
            ParentFont = False
          end
          object __p2_UminB: TLabel
            Left = 76
            Top = 32
            Width = 63
            Height = 13
            AutoSize = False
            Caption = 'Min:0'
            Color = clBtnFace
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clBlue
            Font.Height = -9
            Font.Name = 'MS Sans Serif'
            Font.Pitch = fpFixed
            Font.Style = []
            ParentColor = False
            ParentFont = False
          end
          object __p2_UavgB: TLabel
            Left = 150
            Top = 32
            Width = 73
            Height = 13
            AutoSize = False
            Caption = 'Avg:0'
            Color = clBtnFace
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clBlue
            Font.Height = -9
            Font.Name = 'MS Sans Serif'
            Font.Pitch = fpFixed
            Font.Style = []
            ParentColor = False
            ParentFont = False
          end
        end
        object GroupBox10: TGroupBox
          Left = 575
          Top = 444
          Width = 387
          Height = 65
          Anchors = [akLeft, akBottom]
          Caption = #1055#1072#1088#1072#1084#1077#1090#1088#1099' '#1089#1080#1075#1085#1072#1083#1072' '#1087#1086#1076' '#1084#1072#1088#1082#1077#1088#1072#1084#1080
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -11
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 2
          object __p2_Ta: TLabel
            Left = 2
            Top = 16
            Width = 59
            Height = 13
            AutoSize = False
            Caption = 'Ta:'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clRed
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Pitch = fpFixed
            Font.Style = []
            ParentFont = False
          end
          object __p2_Tb: TLabel
            Left = 2
            Top = 30
            Width = 59
            Height = 13
            AutoSize = False
            Caption = 'Tb:'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clBlue
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Pitch = fpFixed
            Font.Style = []
            ParentFont = False
          end
          object __p2_Uach1: TLabel
            Left = 70
            Top = 16
            Width = 66
            Height = 13
            AutoSize = False
            Caption = 'Uach1:'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clRed
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Pitch = fpFixed
            Font.Style = []
            ParentFont = False
          end
          object __p2_Ubch1: TLabel
            Left = 70
            Top = 30
            Width = 66
            Height = 13
            AutoSize = False
            Caption = 'Ubch1:'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clBlue
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Pitch = fpFixed
            Font.Style = []
            ParentFont = False
          end
          object __p2_Tba: TLabel
            Left = 2
            Top = 43
            Width = 63
            Height = 13
            AutoSize = False
            Caption = 'Tb-a:'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clGreen
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Pitch = fpFixed
            Font.Style = []
            ParentFont = False
          end
          object __p2_Ubach1: TLabel
            Left = 70
            Top = 42
            Width = 72
            Height = 13
            AutoSize = False
            Caption = 'Ub-ach1:'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clGreen
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Pitch = fpFixed
            Font.Style = []
            ParentFont = False
          end
          object __p2_Fba: TLabel
            Left = 238
            Top = 41
            Width = 65
            Height = 13
            AutoSize = False
            Caption = 'Fb-a:'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clMaroon
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Pitch = fpFixed
            Font.Style = []
            ParentFont = False
          end
          object __p2_Ignba: TLabel
            Left = 309
            Top = 42
            Width = 75
            Height = 13
            AutoSize = False
            Caption = 'IGNb-a:'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clMaroon
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Pitch = fpFixed
            Font.Style = []
            ParentFont = False
          end
          object __p2_Ubach2: TLabel
            Left = 149
            Top = 42
            Width = 73
            Height = 13
            AutoSize = False
            Caption = 'Ub-ach2:'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clGreen
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Pitch = fpFixed
            Font.Style = []
            ParentFont = False
          end
          object __p2_Ubch2: TLabel
            Left = 149
            Top = 30
            Width = 66
            Height = 13
            AutoSize = False
            Caption = 'Ubch2:'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clBlue
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Pitch = fpFixed
            Font.Style = []
            ParentFont = False
          end
          object __p2_Uach2: TLabel
            Left = 150
            Top = 16
            Width = 66
            Height = 13
            AutoSize = False
            Caption = 'Uach2:'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clRed
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Pitch = fpFixed
            Font.Style = []
            ParentFont = False
          end
          object __p2_Uca: TLabel
            Left = 238
            Top = 16
            Width = 61
            Height = 13
            AutoSize = False
            Caption = 'Uca:'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clPurple
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Pitch = fpFixed
            Font.Style = []
            ParentFont = False
          end
          object __p2_Uda: TLabel
            Left = 238
            Top = 29
            Width = 59
            Height = 13
            AutoSize = False
            Caption = 'Uda:'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clPurple
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Pitch = fpFixed
            Font.Style = []
            ParentFont = False
          end
          object __p2_Ucb: TLabel
            Left = 317
            Top = 18
            Width = 61
            Height = 13
            AutoSize = False
            Caption = 'Ucb:'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clPurple
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Pitch = fpFixed
            Font.Style = []
            ParentFont = False
          end
          object __p2_Udb: TLabel
            Left = 316
            Top = 30
            Width = 59
            Height = 13
            AutoSize = False
            Caption = 'Udb:'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clPurple
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Pitch = fpFixed
            Font.Style = []
            ParentFont = False
          end
        end
        object GroupBox11: TGroupBox
          Left = 414
          Top = 444
          Width = 160
          Height = 115
          Anchors = [akLeft, akBottom]
          Caption = #1057#1080#1085#1093#1088#1086#1085#1080#1079#1072#1094#1080#1103
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clGreen
          Font.Height = -11
          Font.Name = 'MS Sans Serif'
          Font.Style = [fsBold]
          ParentFont = False
          TabOrder = 3
          object Label29: TLabel
            Left = 5
            Top = 96
            Width = 54
            Height = 13
            Caption = #1058#1086#1083#1097#1080#1085#1072
          end
          object __p2_TriggerEn: TCheckBox
            Left = 5
            Top = 13
            Width = 96
            Height = 16
            Caption = #1042#1082#1083#1102#1095#1077#1085#1072
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clBlack
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ParentFont = False
            TabOrder = 0
          end
          object __p2_TriggerChannel: TComboBox
            Left = 4
            Top = 28
            Width = 153
            Height = 21
            Style = csDropDownList
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clBlack
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ItemHeight = 13
            ItemIndex = 0
            ParentFont = False
            TabOrder = 1
            Text = #1050#1072#1085#1072#1083' '#1040
            Items.Strings = (
              #1050#1072#1085#1072#1083' '#1040
              #1050#1072#1085#1072#1083' B')
          end
          object __p2_TriggerEdge: TComboBox
            Left = 5
            Top = 48
            Width = 152
            Height = 21
            Style = csDropDownList
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clBlack
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ItemHeight = 13
            ItemIndex = 0
            ParentFont = False
            TabOrder = 2
            Text = '['#1040#1073#1089'.] '#1055#1077#1088#1077#1076#1085#1080#1081' '#1092#1088#1086#1085#1090
            Items.Strings = (
              '['#1040#1073#1089'.] '#1055#1077#1088#1077#1076#1085#1080#1081' '#1092#1088#1086#1085#1090
              '['#1040#1073#1089'.] '#1047#1072#1076#1085#1080#1081' '#1092#1088#1086#1085#1090
              '['#1044#1080#1092'.] '#1055#1077#1088#1077#1076#1085#1080#1081' '#1092#1088#1086#1085#1090
              '['#1044#1080#1092'.] '#1047#1072#1076#1085#1080#1081' '#1092#1088#1086#1085#1090
              '['#1057#1080#1075#1084#1072'] '#1055#1077#1088#1077#1076#1085#1080#1081' '#1092#1088#1086#1085#1090
              '['#1057#1080#1075#1084#1072'] '#1047#1072#1076#1085#1080#1081' '#1092#1088#1086#1085#1090
              '['#1057#1080#1075#1084#1072'] '#1057#1088#1077#1076#1085#1077#1077)
          end
          object __p2_TriggerType: TComboBox
            Left = 5
            Top = 70
            Width = 98
            Height = 21
            Style = csDropDownList
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clBlack
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ItemHeight = 13
            ItemIndex = 0
            ParentFont = False
            TabOrder = 3
            Text = #1052#1072#1088#1082#1077#1088' C'
            Items.Strings = (
              #1052#1072#1088#1082#1077#1088' C'
              #1044#1080#1092#1092'.')
          end
          object __p2_TriggerLevel: TEdit
            Left = 102
            Top = 69
            Width = 51
            Height = 21
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clBlack
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ParentFont = False
            TabOrder = 4
            Text = '0,5'
          end
          object __p2_TriggerLineSize: TCSpinEdit
            Left = 63
            Top = 91
            Width = 41
            Height = 22
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clGreen
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Style = [fsBold]
            MaxValue = 4
            MinValue = 1
            ParentFont = False
            TabOrder = 5
            Value = 2
            OnChange = __p2_TriggerLineSizeChange
          end
        end
        object GroupBox12: TGroupBox
          Left = 323
          Top = 444
          Width = 91
          Height = 115
          Anchors = [akLeft, akBottom]
          Caption = #1042#1088#1077#1084#1103'/'#1076#1077#1083
          TabOrder = 4
          DesignSize = (
            91
            115)
          object Label7: TLabel
            Left = 7
            Top = 94
            Width = 12
            Height = 13
            Caption = '1:'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Style = [fsBold]
            ParentFont = False
          end
          object __p2_time: TListBox
            Left = 5
            Top = 13
            Width = 82
            Height = 76
            Anchors = [akLeft, akTop, akRight, akBottom]
            ItemHeight = 13
            Items.Strings = (
              '1 '#1084#1089
              '2 '#1084#1089
              '5 '#1084#1089
              '10 '#1084#1089
              '20 '#1084#1089
              '50 '#1084#1089
              '0.1 '#1089
              '0.2 '#1089)
            TabOrder = 0
          end
          object __p2_timeFactor: TCSpinEdit
            Left = 20
            Top = 91
            Width = 45
            Height = 22
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clBlack
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Style = [fsBold]
            MaxValue = 100
            MinValue = 1
            ParentFont = False
            TabOrder = 1
            Value = 1
            OnChange = __p2_timeFactorChange
          end
        end
        object GroupBox13: TGroupBox
          Left = 162
          Top = 444
          Width = 161
          Height = 115
          Anchors = [akLeft, akBottom]
          Caption = #1050#1072#1085#1072#1083' B'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlue
          Font.Height = -11
          Font.Name = 'MS Sans Serif'
          Font.Style = [fsBold]
          ParentFont = False
          TabOrder = 5
          object Label30: TLabel
            Left = 8
            Top = 49
            Width = 59
            Height = 13
            Caption = #1042#1093'. '#1091#1088#1086#1074#1077#1085#1100
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -8
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ParentFont = False
          end
          object Label31: TLabel
            Left = 8
            Top = 73
            Width = 65
            Height = 13
            Caption = #1042#1093'. '#1076#1077#1083#1080#1090#1077#1083#1100
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -8
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ParentFont = False
          end
          object Label32: TLabel
            Left = 8
            Top = 97
            Width = 46
            Height = 13
            Caption = #1052#1072#1089#1096#1090#1072#1073
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -8
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ParentFont = False
          end
          object __p2_enB: TCheckBox
            Left = 8
            Top = 16
            Width = 42
            Height = 17
            Caption = #1040#1082#1090'.'
            Checked = True
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -8
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ParentFont = False
            State = cbChecked
            TabOrder = 0
          end
          object __p2_GainB: TComboBox
            Left = 96
            Top = 40
            Width = 57
            Height = 21
            AutoComplete = False
            Style = csDropDownList
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -8
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ItemHeight = 13
            ItemIndex = 0
            ParentFont = False
            TabOrder = 1
            Text = '+/-10'
            Items.Strings = (
              '+/-10'
              '+/-1')
          end
          object __p2_divB: TComboBox
            Left = 96
            Top = 64
            Width = 57
            Height = 21
            Style = csDropDownList
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -8
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ItemHeight = 13
            ItemIndex = 0
            ParentFont = False
            TabOrder = 2
            Text = '1:1'
            OnChange = __p2_divBChange
            Items.Strings = (
              '1:1'
              '1:2'
              '1:10'
              '1:50')
          end
          object __p2_factorB: TComboBox
            Left = 96
            Top = 88
            Width = 57
            Height = 21
            Style = csDropDownList
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -8
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ItemHeight = 13
            ItemIndex = 3
            ParentFont = False
            TabOrder = 3
            Text = '1:1'
            OnChange = __p2_factorBChange
            Items.Strings = (
              '10:1'
              '5:1'
              '2:1'
              '1:1'
              '1:2'
              '1:5'
              '1:10'
              '1:20'
              '1:50'
              '1:100')
          end
          object __p2_setViewB: TButton
            Left = 103
            Top = 9
            Width = 25
            Height = 25
            Caption = '0'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clBlack
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ParentFont = False
            TabOrder = 4
            OnClick = __p2_setZeroBClick
          end
          object __p2_SetZeroB: TButton
            Left = 131
            Top = 9
            Width = 25
            Height = 25
            Caption = '~'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clBlack
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ParentFont = False
            TabOrder = 5
            OnClick = __p2_setViewBClick
          end
          object __p2_LineBSize: TCSpinEdit
            Left = 60
            Top = 11
            Width = 41
            Height = 22
            MaxValue = 4
            MinValue = 1
            TabOrder = 6
            Value = 1
            OnChange = __p2_LineBSizeChange
          end
          object __p2_invB: TCheckBox
            Left = 8
            Top = 32
            Width = 49
            Height = 17
            Caption = #1048#1085#1074'.'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clBlack
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Style = [fsBold]
            ParentFont = False
            TabOrder = 7
          end
        end
        object GroupBox14: TGroupBox
          Left = 1
          Top = 444
          Width = 161
          Height = 115
          Anchors = [akLeft, akBottom]
          Caption = #1050#1072#1085#1072#1083' '#1040
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clRed
          Font.Height = -11
          Font.Name = 'MS Sans Serif'
          Font.Style = [fsBold]
          ParentFont = False
          TabOrder = 6
          object Label33: TLabel
            Left = 8
            Top = 49
            Width = 59
            Height = 13
            Caption = #1042#1093'. '#1091#1088#1086#1074#1077#1085#1100
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -8
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ParentFont = False
          end
          object Label34: TLabel
            Left = 8
            Top = 73
            Width = 65
            Height = 13
            Caption = #1042#1093'. '#1076#1077#1083#1080#1090#1077#1083#1100
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -8
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ParentFont = False
          end
          object Label35: TLabel
            Left = 8
            Top = 97
            Width = 46
            Height = 13
            Caption = #1052#1072#1089#1096#1090#1072#1073
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -8
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ParentFont = False
          end
          object __p2_enA: TCheckBox
            Left = 7
            Top = 16
            Width = 42
            Height = 17
            Caption = #1040#1082#1090'.'
            Checked = True
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -8
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ParentFont = False
            State = cbChecked
            TabOrder = 0
          end
          object __p2_GainA: TComboBox
            Left = 96
            Top = 40
            Width = 57
            Height = 21
            AutoComplete = False
            Style = csDropDownList
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -8
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ItemHeight = 13
            ItemIndex = 0
            ParentFont = False
            TabOrder = 1
            Text = '+/-10'
            Items.Strings = (
              '+/-10'
              '+/-1')
          end
          object __p2_divA: TComboBox
            Left = 96
            Top = 64
            Width = 57
            Height = 21
            Style = csDropDownList
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -8
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ItemHeight = 13
            ItemIndex = 0
            ParentFont = False
            TabOrder = 2
            Text = '1:1'
            OnChange = __p2_divAChange
            Items.Strings = (
              '1:1'
              '1:2'
              '1:10'
              '1:50')
          end
          object __p2_factorA: TComboBox
            Left = 96
            Top = 88
            Width = 57
            Height = 21
            Style = csDropDownList
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -8
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ItemHeight = 13
            ItemIndex = 3
            ParentFont = False
            TabOrder = 3
            Text = '1:1'
            OnChange = __p2_factorAChange
            Items.Strings = (
              '10:1'
              '5:1'
              '2:1'
              '1:1'
              '1:2'
              '1:5'
              '1:10'
              '1:20'
              '1:50'
              '1:100')
          end
          object __p2_setViewA: TButton
            Left = 103
            Top = 9
            Width = 25
            Height = 25
            Caption = '0'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clBlack
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ParentFont = False
            TabOrder = 4
            OnClick = __p2_setZeroAClick
          end
          object __p2_setZeroA: TButton
            Left = 131
            Top = 9
            Width = 25
            Height = 25
            Caption = '~'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clBlack
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ParentFont = False
            TabOrder = 5
            OnClick = __p2_setViewAClick
          end
          object __p2_LineASize: TCSpinEdit
            Left = 60
            Top = 11
            Width = 41
            Height = 22
            MaxValue = 4
            MinValue = 1
            TabOrder = 6
            Value = 1
            OnChange = __p2_LineASizeChange
          end
          object __p2_invA: TCheckBox
            Left = 6
            Top = 32
            Width = 51
            Height = 17
            Caption = #1048#1085#1074'.'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clBlack
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Style = [fsBold]
            ParentFont = False
            TabOrder = 7
          end
        end
        object __p2_vScrollBar: TScrollBar
          Left = 950
          Top = 5
          Width = 11
          Height = 440
          Anchors = [akTop, akRight, akBottom]
          Kind = sbVertical
          Max = 20
          PageSize = 0
          Position = 10
          TabOrder = 7
          OnChange = __p2_vScrollBarChange
        end
        object __p2_hScrollBar: TScrollBar
          Left = 2
          Top = 432
          Width = 947
          Height = 12
          Anchors = [akLeft, akRight, akBottom]
          LargeChange = 10
          PageSize = 0
          TabOrder = 8
          OnChange = __p2_hScrollBarChange
        end
      end
    end
    object TTabPage
      Left = 4
      Top = 24
      Caption = #1057#1080#1089#1090#1077#1084#1072' '#1079#1072#1078#1080#1075#1072#1085#1080#1103
      object Panel3: TPanel
        Left = 0
        Top = -2
        Width = 973
        Height = 559
        Caption = 'Panel3'
        TabOrder = 0
        DesignSize = (
          973
          559)
        object __p3_LineChart: TLineChart
          Left = 1
          Top = 2
          Width = 954
          Height = 449
          OnChange = __p3_LineChartChange
        end
        object __p3_vScrollBar: TScrollBar
          Left = 956
          Top = 2
          Width = 14
          Height = 450
          Anchors = [akTop, akRight, akBottom]
          Kind = sbVertical
          Max = 20
          PageSize = 0
          Position = 10
          TabOrder = 0
          OnChange = __p3_vScrollBarChange
        end
        object GroupBox15: TGroupBox
          Left = 3
          Top = 456
          Width = 214
          Height = 100
          Anchors = [akLeft, akBottom]
          Caption = #1055#1072#1088#1072#1084#1077#1090#1088#1099
          TabOrder = 1
          object Label8: TLabel
            Left = 7
            Top = 36
            Width = 116
            Height = 13
            Caption = #1050#1086#1083#1080#1095#1077#1089#1090#1074#1086' '#1094#1080#1083#1080#1085#1076#1088#1086#1074
          end
          object Label9: TLabel
            Left = 7
            Top = 57
            Width = 91
            Height = 13
            Caption = #1055#1086#1079#1080#1094#1080#1103' '#1084#1072#1088#1082#1077#1088#1072
          end
          object __p3_LbCount: TLabel
            Left = 102
            Top = 58
            Width = 12
            Height = 13
            Caption = '1:'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Style = [fsBold]
            ParentFont = False
          end
          object Label26: TLabel
            Left = 8
            Top = 77
            Width = 118
            Height = 13
            Caption = #1055#1088#1077#1076#1074#1072#1088#1080#1090#1077#1083#1100#1085#1099#1081' '#1073#1091#1092'.'
          end
          object __p3_EnCalculate: TCheckBox
            Left = 8
            Top = 16
            Width = 121
            Height = 17
            Caption = #1042#1082#1083#1102#1095#1080#1090#1100' '#1072#1085#1072#1083#1080#1079
            TabOrder = 0
            OnClick = __p3_EnCalculateClick
          end
          object __p3_cylinder: TCSpinEdit
            Left = 143
            Top = 32
            Width = 41
            Height = 22
            MaxValue = 9
            MinValue = 2
            TabOrder = 1
            Value = 4
            OnChange = __p3_cylinderChange
          end
          object __p3_Position: TCSpinEdit
            Left = 143
            Top = 52
            Width = 62
            Height = 22
            MaxValue = 2
            MinValue = 1
            TabOrder = 2
            Value = 1
            OnChange = __p3_PositionChange
          end
          object __p3_PreBuff: TCSpinEdit
            Left = 142
            Top = 76
            Width = 41
            Height = 22
            MaxValue = 9
            TabOrder = 3
            Value = 4
            OnChange = __p3_cylinderChange
          end
        end
        object GroupBox16: TGroupBox
          Left = 222
          Top = 456
          Width = 291
          Height = 100
          Anchors = [akLeft, akBottom]
          Caption = #1042#1088#1077#1084#1077#1085#1085#1099#1077' '#1087#1072#1088#1072#1084#1077#1090#1088#1099
          TabOrder = 2
          object Label10: TLabel
            Left = 8
            Top = 16
            Width = 16
            Height = 13
            Caption = 'Ta:'
          end
          object Label12: TLabel
            Left = 8
            Top = 32
            Width = 16
            Height = 13
            Caption = 'Tb:'
          end
          object Label13: TLabel
            Left = 8
            Top = 48
            Width = 32
            Height = 13
            Caption = 'Tb-Ta:'
          end
          object __p3_Ta: TLabel
            Left = 32
            Top = 16
            Width = 19
            Height = 13
            Caption = '0.0'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Style = [fsBold]
            ParentFont = False
          end
          object __p3_Tb: TLabel
            Left = 32
            Top = 32
            Width = 19
            Height = 13
            Caption = '0.0'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Style = [fsBold]
            ParentFont = False
          end
          object __p3_Tba: TLabel
            Left = 48
            Top = 48
            Width = 19
            Height = 13
            Caption = '0.0'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Style = [fsBold]
            ParentFont = False
          end
        end
      end
    end
    object TTabPage
      Left = 4
      Top = 24
      Caption = #1055#1088#1086#1080#1079#1074#1086#1076#1080#1090#1077#1083#1100#1085#1086#1089#1090#1100
      object Panel4: TPanel
        Left = 0
        Top = -2
        Width = 969
        Height = 559
        Caption = 'Panel4'
        TabOrder = 0
        DesignSize = (
          969
          559)
        object __p4_LineChart: TLineChart
          Left = 0
          Top = 2
          Width = 949
          Height = 503
          DontMoveLines = True
          DontShowMarkers = True
        end
        object __p4_vScrollBar: TScrollBar
          Left = 950
          Top = 1
          Width = 14
          Height = 505
          Anchors = [akTop, akRight, akBottom]
          Kind = sbVertical
          Max = 20
          PageSize = 0
          Position = 10
          TabOrder = 0
          OnChange = __p4_vScrollBarChange
        end
        object GroupBox17: TGroupBox
          Left = 0
          Top = 506
          Width = 945
          Height = 52
          Anchors = [akLeft, akBottom]
          Caption = #1055#1072#1088#1072#1084#1077#1090#1088#1099
          TabOrder = 1
          object Label14: TLabel
            Left = 8
            Top = 20
            Width = 116
            Height = 13
            Caption = #1050#1086#1083#1080#1095#1077#1089#1090#1074#1086' '#1094#1080#1083#1080#1085#1076#1088#1086#1074
          end
          object Label15: TLabel
            Left = 173
            Top = 20
            Width = 71
            Height = 13
            Caption = #1063#1072#1089#1090#1086#1090#1072' '#1087#1086#1074#1090'.'
          end
          object Label16: TLabel
            Left = 309
            Top = 20
            Width = 54
            Height = 13
            Caption = #1057#1084#1077#1097#1077#1085#1080#1077
          end
          object Label17: TLabel
            Left = 512
            Top = 16
            Width = 35
            Height = 13
            Caption = #1062#1080#1083' 1'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clRed
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Style = [fsBold]
            ParentFont = False
          end
          object Label18: TLabel
            Left = 552
            Top = 16
            Width = 35
            Height = 13
            Caption = #1062#1080#1083' 2'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clBlue
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Style = [fsBold]
            ParentFont = False
          end
          object Label19: TLabel
            Left = 592
            Top = 16
            Width = 35
            Height = 13
            Caption = #1062#1080#1083' 3'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clGreen
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Style = [fsBold]
            ParentFont = False
          end
          object Label20: TLabel
            Left = 512
            Top = 32
            Width = 35
            Height = 13
            Caption = #1062#1080#1083' 7'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clPurple
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Style = [fsBold]
            ParentFont = False
          end
          object Label21: TLabel
            Left = 552
            Top = 32
            Width = 35
            Height = 13
            Caption = #1062#1080#1083' 8'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clTeal
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Style = [fsBold]
            ParentFont = False
          end
          object Label22: TLabel
            Left = 592
            Top = 32
            Width = 35
            Height = 13
            Caption = #1062#1080#1083' 9'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clGray
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Style = [fsBold]
            ParentFont = False
          end
          object Label23: TLabel
            Left = 632
            Top = 16
            Width = 35
            Height = 13
            Caption = #1062#1080#1083' 4'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clMaroon
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Style = [fsBold]
            ParentFont = False
          end
          object Label24: TLabel
            Left = 672
            Top = 16
            Width = 35
            Height = 13
            Caption = #1062#1080#1083' 5'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clOlive
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Style = [fsBold]
            ParentFont = False
          end
          object Label25: TLabel
            Left = 712
            Top = 16
            Width = 35
            Height = 13
            Caption = #1062#1080#1083' 6'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clNavy
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Style = [fsBold]
            ParentFont = False
          end
          object __p4_Refresh: TButton
            Left = 424
            Top = 16
            Width = 75
            Height = 25
            Caption = #1054#1073#1085#1086#1074#1080#1090#1100
            TabOrder = 0
            OnClick = __p4_RefreshClick
          end
          object __p4_cylinder: TCSpinEdit
            Left = 128
            Top = 16
            Width = 41
            Height = 22
            MaxValue = 9
            MinValue = 2
            TabOrder = 1
            Value = 4
            OnChange = __p4_cylinderChange
          end
          object __p4_Gain: TCSpinEdit
            Left = 258
            Top = 16
            Width = 47
            Height = 22
            MaxValue = 10000
            MinValue = 1
            TabOrder = 2
            Value = 10
            OnChange = __p4_GainChange
          end
          object __p4_Offset: TCSpinEdit
            Left = 370
            Top = 16
            Width = 47
            Height = 22
            MaxValue = 9000
            MinValue = -9000
            TabOrder = 3
            OnChange = __p4_OffsetChange
          end
        end
      end
    end
  end
  object _Menu: TMainMenu
    object _mFile: TMenuItem
      Caption = #1060#1072#1081#1083
      object _mOpenFile: TMenuItem
        Caption = #1054#1090#1082#1088#1099#1090#1100' '#1092#1072#1081#1083
        ShortCut = 16463
        OnClick = _mOpenFileClick
      end
      object _mSaveFile: TMenuItem
        Caption = #1057#1086#1093#1088#1072#1085#1080#1090#1100' '#1074' '#1092#1072#1081#1083
        ShortCut = 16467
        OnClick = _mSaveFileClick
      end
      object _mExit: TMenuItem
        Caption = #1042#1099#1093#1086#1076
        ShortCut = 16472
        OnClick = _mExitClick
      end
    end
  end
  object OpenDialog1: TOpenDialog
    Left = 656
    Top = 65528
  end
  object SaveDialog1: TSaveDialog
    DefaultExt = 'dex'
    FileName = 'record.dex'
    Filter = 'DiscoEx by Azarenko S.A.|*.dex'
    Left = 688
    Top = 65528
  end
end
