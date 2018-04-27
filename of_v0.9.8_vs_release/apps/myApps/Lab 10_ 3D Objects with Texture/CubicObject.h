#pragma once
#include "ofMain.h"
#include "BaseObject.h"

class CubicObject : public BaseObject
{
private:
	double xPos;
	double yPos;
	double zPos;
	ofColor color;
	int height;
	int width;
	int depth;
	vector<ofBoxPrimitive> boxes;
	ofTexture texture;

	double xRotation;
	double yRotation;

public:
	CubicObject()=default;
	CubicObject(double x, double y, double z, int height, int width, int depth, ofColor color);
	void setup();
	void draw();
	void update();
	void rotate();
};