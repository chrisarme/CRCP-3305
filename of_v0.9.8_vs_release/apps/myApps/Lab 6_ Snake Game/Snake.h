#pragma once
#include "ofMain.h"
#include "Apple.h"

using std::string;
using std::vector;

class Snake {
	//You can use vector in C++ to substitute ArrayList in Java.
	vector <int> x;
	vector <int> y;
	int dir;

	int dx[4]{ 0, 0, 1, -1 };
	int dy[4]{ 1, -1, 0, 0 };

public:
	Snake();
	Snake(int width, int height);

	void reLocate(int width, int height);
	void display(int bs);
	void clean();
	bool eat(Apple apple);
	bool dead(int w, int h);
	void increaseBody();
	void decreaseBody();
	void move();
	void keyControl(int key);
};