#include "stdafx.h"
#include "TextUI.h"
#include "app\app.h"


TextUI::TextUI(float x, float y, std::string text)
{
	this->x = x;
	this->y = y;
	this->text = text;
}

void TextUI::Update(float deltaTime) {}

void TextUI::Render()
{
	App::Print(this->x, this->y, this->text.c_str());
}

void TextUI::Destroy() {}