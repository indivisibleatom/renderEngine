#include "precomp.h"
#include "sceneNode.h"

using namespace std;

SceneNode::~SceneNode()
{
}

void SceneNode::update()
{
	for (SceneNodeList::iterator i = m_pChildNodes.begin(); i != m_pChildNodes.end(); i++)
	{
		(*i)->update();
	}
}

void SceneNode::render()
{
	for (SceneNodeList::iterator i = m_pChildNodes.begin(); i != m_pChildNodes.end(); i++)
	{
		(*i)->render();
	}
}

void SceneNode::addChild(unique_ptr<SceneNode> pChild)
{
	m_pChildNodes.push_back(pChild.release());
}

void SceneNode::removeChild(SceneNode* pChild)
{
	m_pChildNodes.remove(pChild);
}
