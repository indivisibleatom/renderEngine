#include "precomp.h"
#include "renderEngine.h"
#include "eventManager.h"

using namespace std;

class Program
{
	boost::scoped_ptr<IRenderEngine> m_pRenderEngine;
	boost::scoped_ptr<IEventManager> m_pEventManager;

public:
	Program()
	{
		GetRenderEngine(800, 600, 32, m_pRenderEngine);
		GetEventManager(m_pEventManager);
	}

	bool init()
	{
		return m_pRenderEngine->init();
	}

	void runEventLoop()
	{
		do
		{
			if (!m_pEventManager->processEventLoop())
				break;
			m_pRenderEngine->draw();
		}while(true);
	}

	void renderFunction()
	{
		m_pRenderEngine->draw();
	}
};

int main(int argc, char* argv[])
{
	Program prog;
	if (prog.init())
	{
		prog.runEventLoop();
	}

	return 0;
}
