#include "precomp.h"
#include "sceneGraphManager.h"
#include "sceneNode.h"

SceneGraphManager::SceneGraphManager()
{
	m_pRoot = new SceneNode();
}

SceneNode& SceneGraphManager::root() const
{
	assert(m_pRoot != NULL);
	return *m_pRoot;
}