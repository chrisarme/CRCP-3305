#pragma once
#include "BaseObject.h"
#include "ofMain.h"

class SpheresObject : public BaseObject
{
private:
	double xPos;
	double yPos;
	double zPos;
	ofColor color;
	double radius;
	double sinNumber;
	ofSpherePrimitive spheres[2];
	ofTexture waterTexture;
	ofTexture lavaTexture;
	double xRotation;
	double yRotation;

public:
	SpheresObject()=default;
	SpheresObject(double x, double y, double z, double radius, ofColor color);
	void setup();
	void draw();
	void update();
	void rotate();
};