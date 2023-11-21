#pragma once
#include "afxdialogex.h"


// SubTab_Help 对话框

class SubTab_Help : public CDialogEx
{
	DECLARE_DYNAMIC(SubTab_Help)

public:
	SubTab_Help(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~SubTab_Help();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SUBTAB_HELP };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
