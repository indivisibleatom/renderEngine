#include "precomp.h"
#include "sdl\SDL.h"
#include "RenderEngineSDL_GL.h"
#include "sceneGraph.h"

SDL_GLRenderEngine::SDL_GLRenderEngine(int screenX, int screenY, int bpp) : m_screenSize(screenX, screenY), m_bpp(bpp)
{
}

bool SDL_GLRenderEngine::init()
{
	if (SDL_Init(SDL_INIT_VIDEO) == 0)
	{
		SDL_SetVideoMode(m_screenSize.get<0>(), m_screenSize.get<1>(), m_bpp, SDL_HWSURFACE | SDL_OPENGL);	
		//m_pScreenSurface =  SDL_GetVideoSurface();
		return true;
	}
	return false;
}

bool SDL_GLRenderEngine::draw()
{
	return true;
}