#ifndef _GEOMETRYNODE_H_
#define _GEOMETRYNODE_H_

#include "sceneNode.h"

class GeometryNode : public SceneNode
{
private:
	typedef std::list<Drawable> DrawableList;
	DrawableList m_pDrawableList;

public:
	GeometryNode();
	void addDrawable(std::auto_ptr<Drawable>& pDrawable);

	void render() override;
}

#endif//_GEOMETRYNODE_H_