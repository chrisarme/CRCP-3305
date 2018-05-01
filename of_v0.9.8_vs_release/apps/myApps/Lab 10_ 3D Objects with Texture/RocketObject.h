#pragma once
#include "BaseObject.h"
#include "ofMain.h"

class RocketObject : public BaseObject
{
private:
	double xPos;
	double yPos;
	double zPos;
	ofColor color;
	double radius;
	int height;
	ofTexture rocketBody;
	ofTexture rocketHead;
	ofCylinderPrimitive cylinder;
	ofConePrimitive cone;
	double xRotation;
	double yRotation;

public:
	RocketObject()=default;
	RocketObject(double x, double y, double z, double radius, int height, ofColor color);
	void setup();
	void draw();
	void update();
	void rotate();
};