#pragma once
#include <string>
#include "Component.h"

class TextUI : public Component
{
public:
	TextUI(float x, float y, std::string text);
	void Update(float deltaTime);
	void Render();
	void Destroy();
	std::string text;
private:
	float x;
	float y;
};
