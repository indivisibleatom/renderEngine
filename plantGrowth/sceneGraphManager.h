#ifndef _SCENEGRAPHMANAGER_H_
#define _SCENEGRAPHMANAGER_H_

class SceneNode;

class SceneGraphManager
{
private:
	SceneNode* m_pRoot;

public:
	SceneGraphManager();

	SceneNode& root() const;
	void render() const;
};

#endif//_SCENEGRAPHMANAGER_H_