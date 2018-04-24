#pragma once
#include "ofMain.h"

class Triangle
{
private:
	double rotation;
	double size;
	ofPoint centerOfTriangle;
	ofPoint vectors[3];
	ofColor color;

public:
	Triangle();
	Triangle(double size, ofColor color, double rotation, double radius);
	void draw();
};