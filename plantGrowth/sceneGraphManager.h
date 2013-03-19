#ifndef _SCENEGRAPHMANAGER_H_
#define _SCENEGRAPHMANAGER_H_

class IRenderEngine;
class SceneGraph;

class SceneGraphManager
{
private:
	std::shared_ptr<const IRenderEngine> m_pRenderEngine;
	std::unique_ptr<SceneGraph> m_pSceneGraph;

	static SceneGraphManager* s_sceneGraphManager;

	explicit SceneGraphManager(std::shared_ptr<const IRenderEngine>& pRenderEngine);

public:
	void Initialize(std::shared_ptr<const IRenderEngine>& pRenderEngine);

	void render() const;
};

#endif//_SCENEGRAPHMANAGER_H_