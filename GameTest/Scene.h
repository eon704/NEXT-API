#pragma once
#include <vector>
#include "GameObject.h"

class Scene
{
public:
	void Update(float deltaTime);
	void Render();
	void Destroy();
	void AddGameObject(GameObject* gameObject);

private:
	std::vector<GameObject*> gameObjects;
};

