#pragma once
#include "afxdialogex.h"


// SubTab_ExitJiYu 对话框

class SubTab_ExitJiYu : public CDialogEx
{
	DECLARE_DYNAMIC(SubTab_ExitJiYu)

public:
	SubTab_ExitJiYu(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~SubTab_ExitJiYu();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SUBTAB_EXIT_JIYU };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
