#ifndef _TRANSFORMNODE_H_
#define _TRANSFORMNODE_H_

#include "sceneNode.h"
#include "Matrices.h"

class TransformNode : public SceneNode
{
private:
	std::unique_ptr<Matrix4> m_pMatrix;

public:
	TransformNode(std::unique_ptr<Matrix4>& pMatrix);
	void render() override;
};

#endif//_TRANSFORMNODE_H_