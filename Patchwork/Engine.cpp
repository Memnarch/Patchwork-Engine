#include "Engine.h";
#include "Renderer.h";
#include "NullRenderer.h";

CEngine::CEngine()
{
	FNullRenderer = new CNullRenderer();
	FRenderer = FNullRenderer;
}

CEngine::~CEngine()
{
	delete FNullRenderer;
}

CRenderer* CEngine::GetRenderer()
{
	return(FRenderer);
}

void CEngine::SetRenderer(CRenderer* ARenderer)
{
	FRenderer = ARenderer;
	if(!FRenderer)
	{
		FRenderer = FNullRenderer;
	}
}


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