#include "scenemanager.h"

SceneManager::SceneManager()
{
}

SceneManager::~SceneManager()
{
}

void SceneManager::LoadScene(Scene* scene)
{
	if (loadedscene != nullptr)
	{
		loadedscene = nullptr;
	}
	loadedscene = scene;
}