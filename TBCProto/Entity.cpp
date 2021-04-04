#include "Entity.h"

void Entity::Update(const std::vector<Entity>& entities)
{
	if (--_curr_speed > 0) {
		return;
	}
	Action(entities);
}
