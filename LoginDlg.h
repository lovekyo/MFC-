// LoginDlg.h : header file
//

#if !defined(AFX_LOGINDLG_H__9B26DC5B_DBAC_45A2_B9A1_FCF414603EED__INCLUDED_)
#define AFX_LOGINDLG_H__9B26DC5B_DBAC_45A2_B9A1_FCF414603EED__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CLoginDlg dialog

class CLoginDlg : public CDialog
{
// Construction
public:
	CLoginDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CLoginDlg)
	enum { IDD = IDD_LOGIN_DIALOG };
	CString	m_name;
	CString	m_password;
	CString	m_confirmkey;
	CString	m_getkey;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CLoginDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CLoginDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnChanel();
	afx_msg void OnResgine();
	afx_msg void OnLogin();
	afx_msg void OnGetConfirmkey();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LOGINDLG_H__9B26DC5B_DBAC_45A2_B9A1_FCF414603EED__INCLUDED_)
