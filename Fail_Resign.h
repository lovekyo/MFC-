#if !defined(AFX_FAIL_RESIGN_H__AB0FF04F_9986_4DC5_BFEC_A0871250DA7C__INCLUDED_)
#define AFX_FAIL_RESIGN_H__AB0FF04F_9986_4DC5_BFEC_A0871250DA7C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Fail_Resign.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CFail_Resign dialog

class CFail_Resign : public CDialog
{
// Construction
public:
	CFail_Resign(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CFail_Resign)
	enum { IDD = IDD_RESIGN_FAIL };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CFail_Resign)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CFail_Resign)
	afx_msg void OnBackResign();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FAIL_RESIGN_H__AB0FF04F_9986_4DC5_BFEC_A0871250DA7C__INCLUDED_)
