#include "stdafx.h"
#include "SpriteRenderer.h"
#include <string>

SpriteRenderer::SpriteRenderer(std::string spritePath, int columns, int rows) 
{
	this->sprite = App::CreateSprite(".\\TestData\\Test.bmp", 8, 4);
	this->sprite->SetPosition(400.0f, 400.0f);
	this->sprite->SetScale(1.0f);
}

void SpriteRenderer::Render()
{
	this->sprite->Draw();
}

void SpriteRenderer::Destroy()
{
	delete this->sprite;
}

void SpriteRenderer::Update(float deltaTime)
{
	this->sprite->Update(deltaTime);
}