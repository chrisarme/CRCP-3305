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
	cylinder = ofCylinderPrimitive(radius, (height - (height * 1 / 3)), 30, 4);
	cone = ofConePrimitive(radius, height - (height * 1 / 3), 30, 10);

	cylinder.setPosition(ofVec3f(0, -(height * 1 / 3), 0));
	cone.setPosition(ofVec3f(0, (height * 1 / 3), 0));
	cone.rotate(180, 1, 0, 0);

	ofLoadImage(rocketBody, "RocketHeadTexture.jpg");
	ofLoadImage(rocketHead, "RocketBodyTexture.png");

	xRotation = 0;
	yRotation = 0;
}

void RocketObject::draw()
{
	ofPushMatrix();

	ofTranslate(xPos, yPos, zPos);
	ofRotateX(xRotation);
	ofRotateY(yRotation);

	rocketBody.bind();
	cylinder.draw();
	rocketBody.unbind();

	rocketHead.bind();
	cone.draw();
	rocketHead.unbind();

	ofPopMatrix();
}

void RocketObject::update()
{
	// do nothing! feel good!
}

void RocketObject::rotate()
{
	xRotation -= 1;
	yRotation += 1;
}