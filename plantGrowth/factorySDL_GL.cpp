#include "precomp.h"
#include "renderEngineSDL_GL.h"
#include "eventManagerSDL_GL.h"

void GetRenderEngine(int screenX, int screenY, int bpp, boost::scoped_ptr<IRenderEngine>& renderEngine)
{
	renderEngine.reset(new SDL_GLRenderEngine(screenX, screenY, bpp));
}

void GetEventManager(boost::scoped_ptr<IEventManager>& eventManager)
{
	eventManager.reset(new SDL_GLEventManager());	
}