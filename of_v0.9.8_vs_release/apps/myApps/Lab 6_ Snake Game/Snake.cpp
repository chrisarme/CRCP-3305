#pragma once
#include "Snake.h"

Snake::Snake()
{
	reLocate(30, 30);
}
Snake::Snake(int width, int height)
{
	reLocate(width, height);
}

void Snake::reLocate(int width, int height) 
{
	x.push_back(floor(rand() % width + 1));
	y.push_back(floor(rand() % height + 1));
}

void Snake::display(int bs)
{
	ofSetColor(0, 255, 0);
	for (int i = 0; i < x.size(); ++i)
	{
		ofDrawRectangle(x[i]*bs, y[i]*bs, bs, bs);
	}
}

void Snake::clean() {
	x.clear();
	y.clear();
}