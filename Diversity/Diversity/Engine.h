class CEngine
{
private:
	bool FKeepRunning;
protected:
	void Exit();
	virtual void OnStartup() = 0;
	virtual void OnFrame() = 0;
	virtual void OnShutDown() = 0;
public:
	void Run();
};