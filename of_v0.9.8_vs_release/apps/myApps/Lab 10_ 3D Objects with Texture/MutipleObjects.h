#pragma once
#include "BaseObject.h"
#include "ofMain.h"
#include <ctime>


class MultipleObjects : public BaseObject
{
private:
	double xPos;
	double yPos;
	double zPos;
	ofColor color;
	double radius;
	double cubeSize;
	int objectToDraw = 0;
	ofBoxPrimitive box;
	ofSpherePrimitive sphere;
	ofTexture texture;

	clock_t start;

public:
	MultipleObjects() = default;
	MultipleObjects(double x, double y, double z, double radius, double cubeSize, ofColor color);
	void setup();
	void update();
	void draw();
	void rotate();
};