#include "entity.h"

Entity::Entity()
{
	_sprite = nullptr;
}

Entity::~Entity()
{
	
}

void Entity::AddSprite(Sprite* sprite)
{
	DeleteSprite();
	_sprite = sprite;
}

void Entity::DeleteSprite()
{
	if (_sprite != nullptr)
	{
		delete _sprite;
	}
}

Sprite* Entity::getSprite()
{
	return _sprite;
}