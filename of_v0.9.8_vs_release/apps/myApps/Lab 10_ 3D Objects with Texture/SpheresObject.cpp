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

	spheres[0].setPosition((sin(sinNumber) * 5), 0, 0);
	spheres[1].setPosition(-(sin(sinNumber) * 5), 0, 0);
	spheres[1].rotate(180, 0, 1, 0);

	xRotation = 0;
	yRotation = 0;

	ofLoadImage(waterTexture, "WaterTexture.jpg");
	ofLoadImage(lavaTexture, "LavaTexture.jpg");
}

void SpheresObject::draw()
{
	ofPushMatrix();

	ofTranslate(xPos, yPos, zPos);
	ofRotateX(xRotation);
	ofRotateY(yRotation);

	waterTexture.bind();
		spheres[0].draw();
	waterTexture.unbind();

	lavaTexture.bind();
		spheres[1].draw();
	lavaTexture.unbind();

	ofPopMatrix();
}

void SpheresObject::update()
{
	if (sinNumber >= TWO_PI)
	{
		sinNumber = 0;
	}

	sinNumber += .05;

	spheres[0].setPosition((sin(sinNumber) * 5), 0, 0);
	spheres[1].setPosition(-(sin(sinNumber) * 5), 0, 0);
}

void SpheresObject::rotate()
{
	xRotation -= 1;
	yRotation += 1;
}