#include "stdafx.h"
#include "TestController.h"

enum
{
	ANIM_FORWARDS,
	ANIM_BACKWARDS,
	ANIM_LEFT,
	ANIM_RIGHT,
};

TestController::TestController()
{
	this->spriteRenderer = new SpriteRenderer(".\\TestData\\Test.bmp", 8, 4);
	float speed = 1.0f / 15.0f;
	spriteRenderer->sprite->CreateAnimation(ANIM_BACKWARDS, speed, { 0,1,2,3,4,5,6,7 });
	spriteRenderer->sprite->CreateAnimation(ANIM_LEFT, speed, { 8,9,10,11,12,13,14,15 });
	spriteRenderer->sprite->CreateAnimation(ANIM_RIGHT, speed, { 16,17,18,19,20,21,22,23 });
	spriteRenderer->sprite->CreateAnimation(ANIM_FORWARDS, speed, { 24,25,26,27,28,29,30,31 });

	this->AddComponent(spriteRenderer);
}

void TestController::Update(float deltaTime)
{
	GameObject::Update(deltaTime);
	
	float x, y;
	this->spriteRenderer->sprite->GetPosition(x, y);

	if (App::GetController().GetLeftThumbStickX() > 0.5f)
	{
		this->spriteRenderer->sprite->SetAnimation(ANIM_RIGHT);
		x += 1.0f;
	}
	if (App::GetController().GetLeftThumbStickX() < -0.5f)
	{
		this->spriteRenderer->sprite->SetAnimation(ANIM_LEFT);
		x -= 1.0f;
	}
	if (App::GetController().GetLeftThumbStickY() > 0.5f)
	{
		this->spriteRenderer->sprite->SetAnimation(ANIM_FORWARDS);
		y += 1.0f;
	}
	if (App::GetController().GetLeftThumbStickY() < -0.5f)
	{
		this->spriteRenderer->sprite->SetAnimation(ANIM_BACKWARDS);
		y -= 1.0f;
	}

	this->spriteRenderer->sprite->SetPosition(x, y);
}

void TestController::Destroy()
{
	delete this->spriteRenderer;
}