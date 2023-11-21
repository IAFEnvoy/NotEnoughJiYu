
// NotEnoughJiYuDlg.h: 头文件
//

#pragma once


// CNotEnoughJiYuDlg 对话框
class CNotEnoughJiYuDlg : public CDialogEx {
	// 构造
public:
	CNotEnoughJiYuDlg(CWnd* pParent = nullptr);	// 标准构造函数

	// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_NOTENOUGHJIYU_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


	// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	CTabCtrl m_mainTab;
	afx_msg void OnTcnSelchangeTab(NMHDR* pNMHDR, LRESULT* pResult);
	//子界面声明
	SubTab_Basic* tab_basic;
};
