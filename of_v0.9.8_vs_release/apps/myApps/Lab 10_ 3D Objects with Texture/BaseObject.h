#pragma once

class BaseObject 
{
private:

public:
	virtual	void setup() = 0;
	virtual void draw() = 0;
	virtual void update() = 0;
	virtual void rotate() = 0;
};