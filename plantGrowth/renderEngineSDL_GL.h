#ifndef _RENDERENGINE_SDLGL_H_
#define _RENDERENGINE_SDLGL_H_

#include "renderEngine.h"

class SceneGraph;

class SDL_GLRenderEngine : public IRenderEngine
{
private:
	int m_bpp;
	boost::tuple<int, int> m_screenSize;
	boost::scoped_ptr<SceneGraph> m_scenegraph;
	//boost::scoped_ptr<SDL_Surface> m_pSurface;

public:
	SDL_GLRenderEngine(int sizeX, int sizeY, int bpp);
	bool init() override;
	bool draw() override;
};

#endif//_RENDERENGINE_SDLGL_H_