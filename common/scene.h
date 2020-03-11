#ifndef SCENE_H
#define SCENE_H

#include <iostream>

#include <vector>
#include "sprite.h"
#include "entity.h"

class Scene : Entity
{
public:
	Scene();
	~Scene();

private:
	std::vector<Sprite*> sceneSprites;
};

#endif