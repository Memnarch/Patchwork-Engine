#ifndef Engine_h
#define Engine_h

#include "Renderer.h";
#include "NullRenderer.h";

class CEngine
{
private:
	bool FKeepRunning;
	CNullRenderer* FNullRenderer;
	CRenderer* FRenderer;
protected:
	void Exit();
	virtual void OnStartup() = 0;
	virtual void OnFrame() = 0;
	virtual void OnShutDown() = 0;
public:
	CEngine();
	~CEngine();
	void Run();
	CRenderer* GetRenderer();
	void SetRenderer(CRenderer* ARenderer);
};

#endif