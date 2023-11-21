#pragma once
#include "afxdialogex.h"


// SubTab_UDP 对话框

class SubTab_UDP : public CDialogEx
{
	DECLARE_DYNAMIC(SubTab_UDP)

public:
	SubTab_UDP(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~SubTab_UDP();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SUBTAB_UDP };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
