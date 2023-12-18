#pragma once
#include "GameObject.h"
#include "SpriteRenderer.h"

class TestController : public GameObject
{
public:
	TestController();
	void Update(float deltaTime);
	void Destroy();

private:
	SpriteRenderer* spriteRenderer;
};

