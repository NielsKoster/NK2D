#ifndef SCENEMANAGER_H
#define SCENEMANAGER_H

#include <vector>
#include "scene.h"

class SceneManager
{
public:
	SceneManager();
	~SceneManager();
	void LoadScene(Scene* scene);
	Scene* loadedscene;
	std::vector<Scene*> Scenes;
private:
	
};

#endif // !SCENEMANAGER_H

