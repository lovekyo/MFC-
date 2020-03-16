#if !defined(AFX_RESIGNSUCESS_H__25C809E4_79D4_4D6E_BD56_27E72C5E2FEC__INCLUDED_)
#define AFX_RESIGNSUCESS_H__25C809E4_79D4_4D6E_BD56_27E72C5E2FEC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ResignSucess.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CResignSucess dialog

class CResignSucess : public CDialog
{
// Construction
public:
	CResignSucess(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CResignSucess)
	enum { IDD = IDD_RESIGN_SUCESS };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CResignSucess)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CResignSucess)
	afx_msg void OnBackLogin();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_RESIGNSUCESS_H__25C809E4_79D4_4D6E_BD56_27E72C5E2FEC__INCLUDED_)
