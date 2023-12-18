#pragma once
#include "Component.h"
#include <string>
#include "app\app.h"

class SpriteRenderer : public Component
{
public:
	SpriteRenderer(std::string spritePath, int columns, int rows);
	void Update(float deltaTime);
	void Render();
	void Destroy();
	CSimpleSprite* sprite;
};

