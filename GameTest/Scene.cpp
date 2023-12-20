#include "stdafx.h"
#include "Scene.h"

	
void Scene::Update(float deltaTime)
{
	for each (GameObject* gameObject in this->gameObjects)
	{
		gameObject->Update(deltaTime);
	}
}

void Scene::Render()
{
	for each (GameObject * gameObject in this->gameObjects)
	{
		gameObject->Render();
	}
}

void Scene::Destroy()
{
	for each (GameObject * gameObject in this->gameObjects)
	{
		gameObject->Destroy();
		delete gameObject;
	}
}

void Scene::AddGameObject(GameObject* gameObject)
{
	this->gameObjects.push_back(gameObject);
}