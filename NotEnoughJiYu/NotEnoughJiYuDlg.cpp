
// NotEnoughJiYuDlg.cpp: 实现文件
//

#include "pch.h"
#include "framework.h"
#include "NotEnoughJiYu.h"
#include "NotEnoughJiYuDlg.h"
#include "afxdialogex.h"

//子界面
#include "SubTab_Basic.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CNotEnoughJiYuDlg 对话框



CNotEnoughJiYuDlg::CNotEnoughJiYuDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_NOTENOUGHJIYU_DIALOG, pParent) {
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CNotEnoughJiYuDlg::DoDataExchange(CDataExchange* pDX) {
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, MAIN_TAB, m_mainTab);
}

BEGIN_MESSAGE_MAP(CNotEnoughJiYuDlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDOK, &CNotEnoughJiYuDlg::OnBnClickedOk)
	ON_NOTIFY(TCN_SELCHANGE, MAIN_TAB, &CNotEnoughJiYuDlg::OnTcnSelchangeTab)
END_MESSAGE_MAP()


// CNotEnoughJiYuDlg 消息处理程序

BOOL CNotEnoughJiYuDlg::OnInitDialog() {
	CDialogEx::OnInitDialog();

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	ShowWindow(SW_DENORMAL);

	// TODO: 在此添加额外的初始化代码

	m_mainTab.InsertItem(0, _T("基础操作"));
	m_mainTab.InsertItem(1, _T("解除限制"));
	m_mainTab.InsertItem(2, _T("反控(UDP劫持)"));
	m_mainTab.InsertItem(3, _T("帮助"));
	m_mainTab.InsertItem(4, _T("关于"));

	//添加Tab
	tab_basic = new SubTab_Basic();
	tab_basic->Create(IDD_SUBTAB_BASIC, &m_mainTab);

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CNotEnoughJiYuDlg::OnPaint() {
	if (IsIconic()) {
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	} else {
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CNotEnoughJiYuDlg::OnQueryDragIcon() {
	return static_cast<HCURSOR>(m_hIcon);
}



void CNotEnoughJiYuDlg::OnBnClickedOk() {
	// TODO: 在此添加控件通知处理程序代码
	CDialogEx::OnOK();
}


void CNotEnoughJiYuDlg::OnTcnSelchangeTab(NMHDR* pNMHDR, LRESULT* pResult) {
	int mSel = m_mainTab.GetCurFocus();
	tab_basic->ShowWindow(SW_HIDE);
	switch (mSel) {
	case 0:
		tab_basic->CenterWindow();
		tab_basic->ShowWindow(SW_SHOW);
	default:
		break;
	}
	*pResult = 0;
}
