#pragma once

#include "ofMain.h"

class Raindrop
{
private:
	double x;
	double y;
	double size;
	double yVelocity{};
	double xVelocity{};
	double gravity{ .2 };

public:
	Raindrop() = default;
	Raindrop(float x, float y, float size, double yVel, double xVel);
	void update();
	void draw();
	bool checkExistence();
};