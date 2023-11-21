// SubTab_Basic.cpp: 实现文件
//

#include "pch.h"
#include "NotEnoughJiYu.h"
#include "afxdialogex.h"
#include "SubTab_Basic.h"


// SubTab_Basic 对话框

IMPLEMENT_DYNAMIC(SubTab_Basic, CDialogEx)

SubTab_Basic::SubTab_Basic(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_SUBTAB_BASIC, pParent)
{

}

SubTab_Basic::~SubTab_Basic()
{
}

void SubTab_Basic::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(SubTab_Basic, CDialogEx)
END_MESSAGE_MAP()


// SubTab_Basic 消息处理程序
