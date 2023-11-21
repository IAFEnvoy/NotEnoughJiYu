#pragma once
#include "afxdialogex.h"


// SubTab_Basic 对话框

class SubTab_Basic : public CDialogEx
{
	DECLARE_DYNAMIC(SubTab_Basic)

public:
	SubTab_Basic(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~SubTab_Basic();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SUBTAB_BASIC };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
