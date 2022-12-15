#include"Server.h"

int WINAPI _tWinMain(HINSTANCE hInstance, HINSTANCE hPrevInt, LPTSTR lpszCmdLine, int nCmdShow)
{
	Server dlg;
	return DialogBox(hInstance, MAKEINTRESOURCE(IDD_DIALOG1), NULL, Server::DlgProc);
}