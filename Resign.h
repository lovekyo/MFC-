#if !defined(AFX_RESIGN_H__EEE15DF1_A1EA_4E90_8F10_CD6C22126AD0__INCLUDED_)
#define AFX_RESIGN_H__EEE15DF1_A1EA_4E90_8F10_CD6C22126AD0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Resign.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CResign dialog

class CResign : public CDialog
{
// Construction
public:
	CResign(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CResign)
	enum { IDD = IDD_RESIGN };
	CString	m_name;
	CString	m_password;
	CString	m_passconfirm;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CResign)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CResign)
	afx_msg void OnResign1();
	afx_msg void OnLogin1();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_RESIGN_H__EEE15DF1_A1EA_4E90_8F10_CD6C22126AD0__INCLUDED_)
