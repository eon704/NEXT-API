#pragma once
#include "Scene.h"

class GameScene : public Scene
{
public:
	GameScene();
private:
	GameObject* testGameObject;
	GameObject* gameUI;
};

