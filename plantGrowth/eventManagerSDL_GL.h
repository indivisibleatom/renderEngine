#ifndef _EVENTMANAGER_SDLGL_H_
#define _EVENTMANAGER_SDLGL_H_

#include "eventManager.h"

class SDL_GLEventManager : public IEventManager
{
public:
	bool processEventLoop() override;
};

#endif//_EVENTMANAGER_SDLGL_H_