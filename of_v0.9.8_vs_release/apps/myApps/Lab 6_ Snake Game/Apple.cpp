#pragma once
#include "Apple.h"

Apple::Apple()
{
	reLocate(30, 30);
}

Apple::Apple(int w, int h)
{
	reLocate(w, h);
}

void Apple::reLocate(int w, int h) {
	x = floor(rand() % w);
	y = floor(rand() % h);
}
void Apple::display(int bs) {
	ofSetColor(255, 0, 0);
	ofDrawRectangle(x*bs, y*bs, bs, bs);
}

int Apple::getX()
{
	return x;
}

int Apple::getY()
{
	return y;
}