#if !defined(AFX_LOGIN_SUCESS_H__151F187A_3C5F_4949_B42E_FA9A6E141870__INCLUDED_)
#define AFX_LOGIN_SUCESS_H__151F187A_3C5F_4949_B42E_FA9A6E141870__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Login_Sucess.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CLogin_Sucess dialog

class CLogin_Sucess : public CDialog
{
// Construction
public:
	CLogin_Sucess(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CLogin_Sucess)
	enum { IDD = IDD_LOGIN_SUCESS };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CLogin_Sucess)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CLogin_Sucess)
	afx_msg void OnEnd();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LOGIN_SUCESS_H__151F187A_3C5F_4949_B42E_FA9A6E141870__INCLUDED_)
