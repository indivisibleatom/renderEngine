//Implement for custom drawable objects that are added to the scenegraph
#ifndef _DRAWABLE_H_
#define _DRAWABLE_H_

class IDrawable
{
public:
	virtual void render() const;
};

#endif//_DRAWABLE_H_