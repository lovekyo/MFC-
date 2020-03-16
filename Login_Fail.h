#if !defined(AFX_LOGIN_FAIL_H__9BBA2F57_DC53_4685_B959_E288774A396D__INCLUDED_)
#define AFX_LOGIN_FAIL_H__9BBA2F57_DC53_4685_B959_E288774A396D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Login_Fail.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CLogin_Fail dialog

class CLogin_Fail : public CDialog
{
// Construction
public:
	CLogin_Fail(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CLogin_Fail)
	enum { IDD = IDD_LOGIN_FAIL };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CLogin_Fail)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CLogin_Fail)
	afx_msg void OnBackLogin();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LOGIN_FAIL_H__9BBA2F57_DC53_4685_B959_E288774A396D__INCLUDED_)
