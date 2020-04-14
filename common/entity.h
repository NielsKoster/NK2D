#ifndef ENTITY_H
#define ENTITY_H

#include "sprite.h"

class Entity
{
public:
	Entity();
	~Entity();
	void AddSprite(Sprite* sprite);
	void DeleteSprite();

private:
	Sprite* _sprite;
};


#endif // !ENTITY_H
