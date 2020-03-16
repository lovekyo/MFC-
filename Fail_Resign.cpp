// Fail_Resign.cpp : implementation file
//

#include "stdafx.h"
#include "Login.h"
#include "Fail_Resign.h"
#include "Resign.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CFail_Resign dialog


CFail_Resign::CFail_Resign(CWnd* pParent /*=NULL*/)
	: CDialog(CFail_Resign::IDD, pParent)
{
	//{{AFX_DATA_INIT(CFail_Resign)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CFail_Resign::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CFail_Resign)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CFail_Resign, CDialog)
	//{{AFX_MSG_MAP(CFail_Resign)
	ON_BN_CLICKED(IDC_BACK_RESIGN, OnBackResign)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CFail_Resign message handlers

void CFail_Resign::OnBackResign() 
{
	int response;
	CResign resignDlg;

	this->OnOK();

	response = resignDlg.DoModal();

}
