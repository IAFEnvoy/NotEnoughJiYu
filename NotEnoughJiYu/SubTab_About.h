#pragma once
#include "afxdialogex.h"


// SubTab_About 对话框

class SubTab_About : public CDialogEx
{
	DECLARE_DYNAMIC(SubTab_About)

public:
	SubTab_About(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~SubTab_About();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SUBTAB_ABOUT };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
