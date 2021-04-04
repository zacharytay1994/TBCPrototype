#pragma once

#include <sstream>
#include <vector>

class Entity {
	int _team{ 0 };
	int _speed{ 0 };
	int _curr_speed{ _speed };
public:
	friend std::stringstream& operator<<(std::stringstream& ss, const Entity& entity);

	void Update(const std::vector<Entity>& entities);
	virtual void Action(const std::vector<Entity>& entities) = 0;
};

std::stringstream& operator<<(std::stringstream& ss, const Entity& entity) {
	ss << "Speed: " << entity._speed;
	return ss;
}