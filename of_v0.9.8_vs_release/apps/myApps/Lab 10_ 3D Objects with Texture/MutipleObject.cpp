#include "MutipleObjects.h"

MultipleObjects::MultipleObjects(double x, double y, double z, double radius, double cubeSize, ofColor color)
{
	xPos = x;
	yPos = y;
	zPos = z;
	this->radius = radius;
	this->cubeSize = cubeSize;
	this->color = color;
}

void MultipleObjects::setup()
{
	box = ofBoxPrimitive(cubeSize, cubeSize, cubeSize);
	sphere = ofSpherePrimitive(radius, 20);

	box.setPosition(xPos, yPos, zPos);
	sphere.setPosition(xPos, yPos, zPos);
	sphere.rotate(-90, 0, 1, 0);

	start = clock();

	ofLoadImage(texture, "Image1test.jpg");
}

void MultipleObjects::update()
{
	if (clock() - start >= 2000 && objectToDraw == 0)
	{
		objectToDraw = 1;
		start = clock();
	}
	else if (clock() - start >= 2000 && objectToDraw == 1)
	{
		objectToDraw = 0;
		start = clock();
	}
}

void MultipleObjects::draw()
{
	texture.bind();

	if (objectToDraw == 0)
	{
		box.draw();
	}
	else if (objectToDraw == 1)
	{
		sphere.draw();
	}

	texture.unbind();
}

void MultipleObjects::rotate()
{
	box.rotate(1, -1, 1, 0);
	sphere.rotate(1, -1, 1, 0);
}