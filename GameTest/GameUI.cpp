#include "stdafx.h"
#include "GameUI.h"
#include "App/app.h"


GameUI::GameUI()
{
	this->textUI = new TextUI(100, 100, "Game");
	this->AddComponent(this->textUI);
}

