﻿// SjClientSocket.cpp: 구현 파일
//

#include "pch.h"
#include "SjTetris2.h"
#include "SjTetris2Dlg.h"
#include "SjClientSocket.h"



// CSjClientSocket

CSjClientSocket::CSjClientSocket()
{
}

CSjClientSocket::~CSjClientSocket()
{
}


// CSjClientSocket 멤버 함수


void CSjClientSocket::OnReceive(int nErrorCode)
{
	// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호출합니다.
	m_pWnd->SendMessage(UM_RECEIVE, 0, (LPARAM)this);

	CSocket::OnReceive(nErrorCode);
}


void CSjClientSocket::OnClose(int nErrorCode)
{
	// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호출합니다.
	m_pWnd->SendMessage(UM_SOCKET_CLOSE, 0, (LPARAM)this);
	CSocket::OnClose(nErrorCode);
}


void CSjClientSocket::SetMainWindow(CWnd* pWnd)
{
	m_pWnd = pWnd;
	// TODO: 여기에 구현 코드 추가.
}
