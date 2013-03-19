#ifndef _SCENENODE_H_
#define _SCENENODE_H_

class SceneNode
{
private:
	typedef std::list<SceneNode*> SceneNodeList;
	SceneNodeList m_pChildNodes;

public:
	virtual ~SceneNode();

	virtual void update();
	virtual void render();

	void addChild(std::unique_ptr<SceneNode> pChild);
	void removeChild(SceneNode* pChild);
};

#endif//_SCENENODE_H_