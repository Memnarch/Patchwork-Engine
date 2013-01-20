#ifndef TestRuntime_h
#define TestRuntime_h
#include "Engine.h"

class CTestRuntime : public CEngine
{
private:

protected:
	void OnStartup();
	void OnFrame();
	void OnShutDown();
public:

};

#endif