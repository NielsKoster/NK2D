#include "entity.h"

Entity::Entity()
{
	
}

Entity::~Entity()
{
	
}

void Entity::AddSprite(Sprite* sprite)
{
	DeleteSprite();
	Sprite* _sprite;
}

void Entity::DeleteSprite()
{
	if (_sprite != nullptr)
	{
		delete _sprite;
	}
}