#include "MyForm.h"
#include <Windows.h>
using namespace farming17v2form;
int __stdcall WinMain(HINSTANCE hInst, HINSTANCE hPInst,
	LPSTR lpCmdLine, int nCmdShow)
{
	MyForm frm;
	frm.ShowDialog();
	return 0;
}
