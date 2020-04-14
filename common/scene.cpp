#include "scene.h"

Scene::Scene()
{
	
}

Scene::~Scene()
{

}

void Scene::AddEntity(Entity* entity)
{
	entity = new Entity();
	sceneEntities.push_back(entity);
}