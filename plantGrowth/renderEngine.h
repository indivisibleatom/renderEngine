#ifndef _RENDERENGINE_
#define _RENDERENGINE_

class IRenderEngine
{
public:
	virtual bool init() = 0;
	virtual bool draw() = 0;
	virtual ~IRenderEngine() = 0 {}
};

void GetRenderEngine(int screenX, int screenY, int bpp, __out boost::scoped_ptr<IRenderEngine>& engine);

#endif//_RENDERENGINE_