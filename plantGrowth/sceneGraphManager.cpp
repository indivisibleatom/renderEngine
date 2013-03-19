#include "precomp.h"
#include "sceneGraphManager.h"
#include "renderEngine.h"
#include "sceneGraph.h"

using namespace std;

SceneGraphManager* SceneGraphManager::s_sceneGraphManager = NULL;

SceneGraphManager::SceneGraphManager(shared_ptr<const IRenderEngine>& pRenderEngine) : m_pRenderEngine(pRenderEngine), m_pSceneGraph(new SceneGraph())
{
}

void SceneGraphManager::Initialize(shared_ptr<const IRenderEngine>& pRenderEngine)
{
	s_sceneGraphManager = new SceneGraphManager(pRenderEngine);
}