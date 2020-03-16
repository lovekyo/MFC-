// Login_Sucess.cpp : implementation file
//

#include "stdafx.h"
#include "Login.h"
#include "Login_Sucess.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CLogin_Sucess dialog


CLogin_Sucess::CLogin_Sucess(CWnd* pParent /*=NULL*/)
	: CDialog(CLogin_Sucess::IDD, pParent)
{
	//{{AFX_DATA_INIT(CLogin_Sucess)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CLogin_Sucess::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CLogin_Sucess)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CLogin_Sucess, CDialog)
	//{{AFX_MSG_MAP(CLogin_Sucess)
	ON_BN_CLICKED(IDC_END, OnEnd)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CLogin_Sucess message handlers

void CLogin_Sucess::OnEnd() 
{
	if( MessageBox( "È·ÈÏÍË³ö", "", MB_YESNO | MB_ICONQUESTION ) == IDYES  ){
		this->SendMessage( WM_CLOSE );
	}	
}
