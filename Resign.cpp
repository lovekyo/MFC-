// Resign.cpp : implementation file
//

#include "stdafx.h"
#include "Login.h"
#include "Resign.h"
#include "ResignSucess.h"
#include "LoginDlg.h"
#include "Fail_Resign.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CResign dialog


CResign::CResign(CWnd* pParent /*=NULL*/)
	: CDialog(CResign::IDD, pParent)
{
	//{{AFX_DATA_INIT(CResign)
	m_name = _T("");
	m_password = _T("");
	m_passconfirm = _T("");
	//}}AFX_DATA_INIT
}


void CResign::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CResign)
	DDX_Text(pDX, IDC_NAME_EDIT1, m_name);
	DDX_Text(pDX, IDC_PASSWORD_EDIT2, m_password);
	DDX_Text(pDX, IDC_PASSAGIN_EDIT3, m_passconfirm);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CResign, CDialog)
	//{{AFX_MSG_MAP(CResign)
	ON_BN_CLICKED(IDC_RESIGN1, OnResign1)
	ON_BN_CLICKED(IDC_LOGIN1, OnLogin1)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CResign message handlers

void CResign::OnResign1() 
{
	UpdateData(TRUE);
	CFile file;
	file.Open("F:\\程序\\visual程序\\Login\\data\\data.txt",CFile:: modeCreate | CFile::modeReadWrite,NULL);

	file.Write(m_name,m_name.GetLength());
	file.Write("\r\n", 2);
	file.Write(m_password,m_password.GetLength());
	file.Close();
	INT_PTR Response1,Response2;
	this->OnOK();
	CResignSucess ResignTip;
	CFail_Resign FailTip;
	
	//判断注册是否成功
	if(m_password == m_passconfirm){
		Response1 = ResignTip.DoModal();
	}
	else{
		Response2 = FailTip.DoModal();
	}
	
	UpdateData(FALSE);
}

void CResign::OnLogin1() 
{
	int res;
	this->OnOK();
	
	CLoginDlg backlogin;
	res = backlogin.DoModal();


}
