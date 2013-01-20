#include "Engine.h";

void CEngine::Run()
{
	FKeepRunning = true;
	OnStartup();
	while(FKeepRunning)
	{
		OnFrame();
	}
	OnShutDown();
}

void CEngine::Exit()
{
	FKeepRunning = false;
}