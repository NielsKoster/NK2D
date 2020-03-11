#ifndef SCENE_H
#define SCENE_H

#include <iostream>

#include <vector>
#include "sprite.h"

class Scene
{
public:
	Scene();
	~Scene();

private:
	std::vector<Sprite*> sceneSprites;
};

#endif