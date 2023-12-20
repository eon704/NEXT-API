#pragma once

#include <vector>
#include "Component.h"

class GameObject
{
public:
	GameObject();
	void virtual Update(float deltaTime);
	void Render();
	void AddComponent(Component* component);
	void Destroy();
private:
	std::vector<Component*> components;
	std::vector<GameObject*> children;
};

