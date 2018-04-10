#include "Particle.h"
#include "ofMain.h"

Particle::Particle(float x, float y, float xVelocity, float yVelocity, float xAcceleration, float yAcceleration)
{//traditional way to write constructor
	this->x = x;
	this->y = y;
	this->xVelocity = xVelocity;
	this->yVelocity = yVelocity;
	this->xAcceleration = xAcceleration;
	this->yAcceleration = yAcceleration;
}

void Particle::update()
{
	x += xVelocity;
	y += yVelocity;
	xVelocity += xAcceleration;
	yVelocity += yAcceleration;

	if (size < 0)
	{
		size = 0;
	}
	else
	{
		size -= 0.1;
	}

	if (alpha < 0)
	{
		alpha = 0;
	}
	else
	{
		alpha -= 5;
	}
}

void Particle::draw()
{
	ofSetColor(255, 255, 0, alpha);
	ofSetCircleResolution(3);
	ofDrawCircle(x, y, size);
}

void Particle::setY(int yPos)
{
	y = yPos;
}

int Particle::getAlpha()
{
	return alpha;
}