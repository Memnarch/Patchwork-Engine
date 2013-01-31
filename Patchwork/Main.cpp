
#include <windows.h>
#include "TestRuntime.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR pScmdline, int iCmdshow)
{
	CTestRuntime* LRuntime = new CTestRuntime();
	LRuntime->Run();
	delete LRuntime;
}