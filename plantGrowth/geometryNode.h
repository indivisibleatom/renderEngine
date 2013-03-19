#ifndef _GEOMETRYNODE_H_
#define _GEOMETRYNODE_H_

#include "sceneNode.h"

class IDrawable;

class GeometryNode : public SceneNode
{
private:
	typedef std::list<std::unique_ptr<const IDrawable>> DrawablePtrList;
	DrawablePtrList m_pDrawableList;

public:
	GeometryNode();
	~GeometryNode();

	void render() override;

	void addDrawable(std::unique_ptr<const IDrawable>&& pDrawable);
};

#endif//_GEOMETRYNODE_H_