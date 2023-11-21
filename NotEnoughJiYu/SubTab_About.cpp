// SubTab_About.cpp: 实现文件
//

#include "pch.h"
#include "NotEnoughJiYu.h"
#include "afxdialogex.h"
#include "SubTab_About.h"


// SubTab_About 对话框

IMPLEMENT_DYNAMIC(SubTab_About, CDialogEx)

SubTab_About::SubTab_About(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_SUBTAB_ABOUT, pParent)
{

}

SubTab_About::~SubTab_About()
{
}

void SubTab_About::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(SubTab_About, CDialogEx)
END_MESSAGE_MAP()


// SubTab_About 消息处理程序
