#include "stdafx.h"
#include "GameScene.h"
#include "GameUI.h"
#include "TestController.h"

GameScene::GameScene() 
{
	this->testGameObject = new TestController();
	this->gameUI = new GameUI();

	this->AddGameObject(this->testGameObject);
	this->AddGameObject(this->gameUI);
}