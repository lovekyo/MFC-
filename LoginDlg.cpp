// LoginDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Login.h"
#include "LoginDlg.h"
#include "Resign.h"
#include "time.h"
#include "Login_Sucess.h"
#include "Login_Fail.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CLoginDlg dialog

CLoginDlg::CLoginDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CLoginDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CLoginDlg)
	m_name = _T("");
	m_password = _T("");
	m_confirmkey = _T("");
	m_getkey = _T("");
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CLoginDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CLoginDlg)
	DDX_Text(pDX, IDC_NAME_EDIT1, m_name);
	DDX_Text(pDX, IDC_PASSWORD_EDIT2, m_password);
	DDX_Text(pDX, IDC_CONFIRM_EDIT3, m_confirmkey);
	DDX_Text(pDX, IDC_GETKEY_EDIT4, m_getkey);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CLoginDlg, CDialog)
	//{{AFX_MSG_MAP(CLoginDlg)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_CHANEL, OnChanel)
	ON_BN_CLICKED(IDC_RESGINE, OnResgine)
	ON_BN_CLICKED(IDC_LOGIN, OnLogin)
	ON_BN_CLICKED(IDC_GET_CONFIRMKEY, OnGetConfirmkey)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CLoginDlg message handlers

BOOL CLoginDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	//修改字体



	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CLoginDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CLoginDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CLoginDlg::OnChanel() 
{
	if( MessageBox( "确认退出", "", MB_YESNO | MB_ICONQUESTION ) == IDYES  ){
		this->SendMessage( WM_CLOSE );
	}	
}


//注册按钮
void CLoginDlg::OnResgine() 
{
	INT_PTR nRes;
	this->OnOK();
	CResign ResignDlg;

	nRes = ResignDlg.DoModal();

}


//登录按钮
void CLoginDlg::OnLogin() 
{
	UpdateData(TRUE);
	CString name_txt = "",password_txt = "";

	CStdioFile file;
	file.Open("F:\\程序\\visual程序\\Login\\data\\data.txt",CFile::modeRead);
	file.ReadString(name_txt);
	file.ReadString(password_txt);

	if(name_txt == m_name && password_txt == m_password && m_confirmkey == m_getkey){
		int response0;
		CLogin_Sucess login_sucess;
		this->OnOK();

		response0 = login_sucess.DoModal();

	}
/*	else if(m_confirmkey == "" || m_getkey == ""){
		int response1;
		CLogin_Fail login_fail;
		this->OnOK();

		response1 = login_fail.DoModal();
	}*/
	else{
		int response1;
		CLogin_Fail login_fail;
		this->OnOK();

		response1 = login_fail.DoModal();

	}
	file.Close();
	UpdateData(FALSE);
}


//获取验证码
void CLoginDlg::OnGetConfirmkey() 
{
	UpdateData(TRUE);
	m_getkey = "";
	int number = 0;
	CString temp = "";
	Sleep(1000);
	srand((int)time(NULL));
	for(int i = 0;i < 4;i++){
		number = rand()%10;
		temp.Format(_T("%d"),number);
		m_getkey += temp;
	}

	UpdateData(FALSE);
	
}
