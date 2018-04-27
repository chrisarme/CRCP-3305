#include "RocketObject.h"

RocketObject::RocketObject(double x, double y, double z, double radius, int height, ofColor color)
{
	xPos = x;
	yPos = y;
	zPos = z;
	this->radius = radius;
	this->height = height;
	this->color = color;
}

void RocketObject::setup()
{
	cylinder = ofCylinderPrimitive(radius, (height - (height * 1 / 3)), 10, 2);
	cone = ofConePrimitive(radius, height - (height * 1 / 3), 10, 5);

	cylinder.setPosition(ofVec3f(xPos, yPos - (height * 1 / 3), zPos));
	cone.setPosition(ofVec3f(xPos, yPos + (height * 1 / 3), zPos));
	cone.rotate(180, 1, 0, 0);
}

void RocketObject::draw()
{
	cylinder.draw();
	cone.draw();
}