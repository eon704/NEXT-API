#include "stdafx.h"
#include "GameObject.h"

GameObject::GameObject() {}

GameObject::GameObject(std::vector<Component*> components)
{
	this->components = components;
}

void GameObject::Update(float deltaTime)
{
	for each (Component* component in this->components)
	{
		component->Update(deltaTime);
	}
}

void GameObject::Render()
{
	for each (Component * component in this->components)
	{
		component->Render();
	}
}

void GameObject::AddComponent(Component* component) {
	this->components.push_back(component);
}

void GameObject::Destroy()
{
	for each (Component * component in this->components)
	{
		component->Destroy();
	}
}