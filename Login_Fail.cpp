// Login_Fail.cpp : implementation file
//

#include "stdafx.h"
#include "Login.h"
#include "Login_Fail.h"
#include "LoginDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CLogin_Fail dialog


CLogin_Fail::CLogin_Fail(CWnd* pParent /*=NULL*/)
	: CDialog(CLogin_Fail::IDD, pParent)
{
	//{{AFX_DATA_INIT(CLogin_Fail)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CLogin_Fail::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CLogin_Fail)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CLogin_Fail, CDialog)
	//{{AFX_MSG_MAP(CLogin_Fail)
	ON_BN_CLICKED(IDC_BACK_LOGIN, OnBackLogin)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CLogin_Fail message handlers

void CLogin_Fail::OnBackLogin() 
{
	int response;
	CLoginDlg backLogin;
	this->OnOK();
	response = backLogin.DoModal();
}
