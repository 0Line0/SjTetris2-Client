#pragma once
#define UM_RECEIVE (WM_USER + 1)
#define UM_SOCKET_CLOSE (WM_USER + 3)

// CSjClientSocket 명령 대상

class CSjClientSocket : public CSocket
{
	public:
	CSjClientSocket();
	virtual ~CSjClientSocket();
	virtual void OnReceive(int nErrorCode);
	virtual void OnClose(int nErrorCode);
	void SetMainWindow(CWnd* pWnd);
private:
	CWnd* m_pWnd;
public:
	bool m_bFlag;
	bool m_bConnect;
};


