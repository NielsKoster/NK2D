#ifndef SCENEMANAGER_H
#define SCENEMANAGER_H

#include <vector>
#include "scene.h"

class SceneManager
{
public:
	SceneManager();
	~SceneManager();
	void LoadScene(Scene scene);
	Scene* loadedscene;

private:
	std::vector<Scene*> Scenes;
};

#endif // !SCENEMANAGER_H

