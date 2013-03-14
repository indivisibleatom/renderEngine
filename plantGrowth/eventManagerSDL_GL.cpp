#include "precomp.h"
#include "eventManagerSDL_GL.h"
#include "sdl\SDL_events.h"

bool SDL_GLEventManager::processEventLoop()
{
	SDL_Event event;
	while (SDL_PollEvent(&event)) 
	{
		switch (event.type)
		{
			case SDL_QUIT: return false;
				break;
		}
	}
	return true;
}