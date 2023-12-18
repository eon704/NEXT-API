#pragma once

#include <vector>
#include "Component.h"

class GameObject
{
public:
	GameObject();
	GameObject(std::vector<Component*> components);
	void virtual Update(float deltaTime);
	void Render();
	void AddComponent(Component* component);
	void Destroy();
private:
	std::vector<Component*> components;
};

