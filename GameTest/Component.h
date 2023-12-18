#pragma once
class Component
{
public:
	virtual void Update(float deltaTime) = 0;
	virtual void Render() = 0;
	virtual void Destroy() = 0;
};

