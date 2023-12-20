#pragma once
#include "GameObject.h"
#include "TextUI.h"

class GameUI : public GameObject
{
public:
	GameUI();

private:
	TextUI* textUI;
};