#pragma once
#include "ofMain.h"

class Apple {
	int x;
	int y;
public:
	Apple();
	Apple(int w, int h);
	void reLocate(int w, int h);
	void display(int bs);
};