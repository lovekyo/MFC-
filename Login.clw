; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CLogin_Fail
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "Login.h"

ClassCount=7
Class1=CLoginApp
Class2=CLoginDlg

ResourceCount=7
Resource2=IDD_LOGIN_SUCESS
Resource1=IDR_MAINFRAME
Class3=CResign
Resource3=IDD_RESIGN_SUCESS
Class4=CResignSucess
Resource4=IDD_LOGIN_DIALOG
Resource5=IDD_LOGIN_FAIL
Class5=CLogin_Sucess
Resource6=IDD_RESIGN
Class6=CFail_Resign
Class7=CLogin_Fail
Resource7=IDD_RESIGN_FAIL

[CLS:CLoginApp]
Type=0
HeaderFile=Login.h
ImplementationFile=Login.cpp
Filter=N

[CLS:CLoginDlg]
Type=0
HeaderFile=LoginDlg.h
ImplementationFile=LoginDlg.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC
LastObject=IDC_CONFIRM_EDIT3



[DLG:IDD_LOGIN_DIALOG]
Type=1
Class=CLoginDlg
ControlCount=12
Control1=IDC_NAME,static,1342308352
Control2=IDC_NAME_EDIT1,edit,1350631552
Control3=IDC_PASSWORD,static,1342308352
Control4=IDC_PASSWORD_EDIT2,edit,1350631584
Control5=IDC_CONFIRM,static,1342308352
Control6=IDC_CONFIRM_EDIT3,edit,1350631552
Control7=IDC_LOGIN,button,1342242816
Control8=IDC_RESGINE,button,1342242816
Control9=IDC_TIP,static,1342308352
Control10=IDC_CHANEL,button,1342242816
Control11=IDC_GET_CONFIRMKEY,button,1342242816
Control12=IDC_GETKEY_EDIT4,edit,1350631552

[DLG:IDD_RESIGN]
Type=1
Class=CResign
ControlCount=11
Control1=IDC_RESIGNTIP1,static,1342308352
Control2=IDC_RESIGNTIP2,static,1342308352
Control3=IDC_NAME1,static,1342308352
Control4=IDC_NAME_EDIT1,edit,1350631552
Control5=IDC_PASSWORD1,static,1342308352
Control6=IDC_PASSWORD_EDIT2,edit,1350631584
Control7=IDC_PASSWORD2_AGAIN,static,1342308352
Control8=IDC_PASSAGIN_EDIT3,edit,1350631584
Control9=IDC_RESIGN1,button,1342242816
Control10=IDC_TIP,static,1342308352
Control11=IDC_LOGIN1,button,1342242816

[DLG:IDD_RESIGN_SUCESS]
Type=1
Class=CResignSucess
ControlCount=2
Control1=IDC_RESIGN_SUCESSTIP,static,1342308352
Control2=IDC_BACK_LOGIN,button,1342242816

[CLS:CResign]
Type=0
HeaderFile=Resign.h
ImplementationFile=Resign.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC

[CLS:CResignSucess]
Type=0
HeaderFile=ResignSucess.h
ImplementationFile=ResignSucess.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC

[DLG:IDD_LOGIN_SUCESS]
Type=1
Class=CLogin_Sucess
ControlCount=7
Control1=IDC_BOOK_NAME,static,1342308352
Control2=IDC_BOOK_AUTHOT,static,1342308352
Control3=IDC_TIME,static,1342308352
Control4=IDC_BOOK1,static,1342308352
Control5=IDC_AUTHOR1,static,1342308352
Control6=IDC_TIME1,static,1342308352
Control7=IDC_END,button,1342242816

[DLG:IDD_LOGIN_FAIL]
Type=1
Class=CLogin_Fail
ControlCount=3
Control1=IDC_FAIL_TIP,static,1342308352
Control2=IDC_TIP,static,1342308352
Control3=IDC_BACK_LOGIN,button,1342242816

[CLS:CLogin_Sucess]
Type=0
HeaderFile=Login_Sucess.h
ImplementationFile=Login_Sucess.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC

[DLG:IDD_RESIGN_FAIL]
Type=1
Class=CFail_Resign
ControlCount=2
Control1=IDC_TIP,static,1342308352
Control2=IDC_BACK_RESIGN,button,1342242816

[CLS:CFail_Resign]
Type=0
HeaderFile=Fail_Resign.h
ImplementationFile=Fail_Resign.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC

[CLS:CLogin_Fail]
Type=0
HeaderFile=Login_Fail.h
ImplementationFile=Login_Fail.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC

