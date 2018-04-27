#include "SpheresObject.h"

SpheresObject::SpheresObject(double x, double y, double z, double radius, ofColor color)
{
	xPos = x;
	yPos = y;
	zPos = z;
	this->radius = radius;
	this->color = color;
}

void SpheresObject::setup()
{
	sinNumber = 0;
	spheres[0] = ofSpherePrimitive(radius, 20);
	spheres[1] = ofSpherePrimitive(radius, 20);

	spheres[0].setPosition(xPos + (sin(sinNumber) * 5), yPos, zPos);
	spheres[1].setPosition(xPos - (sin(sinNumber) * 5), yPos, zPos);
}

void SpheresObject::draw()
{
	spheres[0].draw();
	spheres[1].draw();
}

void SpheresObject::update()
{
	if (sinNumber >= TWO_PI)
	{
		sinNumber = 0;
	}
	//if (ofGetMouseX() <= ofGetWidth() /2 && ofGetMouseY() <= ofGetHeight / 2)

	sinNumber += .1;

	spheres[0].setPosition(xPos + (sin(sinNumber) * 5), yPos, zPos);
	spheres[1].setPosition(xPos - (sin(sinNumber) * 5), yPos, zPos);
}