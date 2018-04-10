#pragma once

#include "ofMain.h"

class Raindrop
{
private:
	double x;
	double y;
	double size;
	double velocity{};
	double gravity{ .2 };

public:
	Raindrop() = default;
	Raindrop(float x, float y, float size);
	void update();
	void draw();
	bool checkExistence();
};