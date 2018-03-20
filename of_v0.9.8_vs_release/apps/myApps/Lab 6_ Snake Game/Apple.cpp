#pragma once
#include "Apple.h"

	Apple::Apple(int w, int h)
	{
		reLocate(w, h);
	}

	void Apple::reLocate(int w, int h) {
		x = floor(rand() % w);
		y = floor(rand() % h);
	}
	void Apple::display(int bs) {
		fill(255, 0, 0);
		ofDrawRectangle(x*bs, y*bs, bs, bs);
	}