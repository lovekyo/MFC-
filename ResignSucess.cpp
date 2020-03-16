// ResignSucess.cpp : implementation file
//

#include "stdafx.h"
#include "Login.h"
#include "ResignSucess.h"
#include "LoginDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CResignSucess dialog


CResignSucess::CResignSucess(CWnd* pParent /*=NULL*/)
	: CDialog(CResignSucess::IDD, pParent)
{
	//{{AFX_DATA_INIT(CResignSucess)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CResignSucess::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CResignSucess)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CResignSucess, CDialog)
	//{{AFX_MSG_MAP(CResignSucess)
	ON_BN_CLICKED(IDC_BACK_LOGIN, OnBackLogin)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CResignSucess message handlers

void CResignSucess::OnBackLogin() 
{
	INT_PTR Response;
	this->OnOK();
	CLoginDlg backLogin;
	Response = backLogin.DoModal();
}
