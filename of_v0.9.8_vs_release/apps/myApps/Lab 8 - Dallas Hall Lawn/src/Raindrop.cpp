#include "Raindrop.h"

Raindrop::Raindrop(float x, float y, float size)
{
	this->x = x;
	this->y = y;
	this->size = size;
}

bool Raindrop::checkExistence()
{
	if (y > ofGetHeight())
	{
		return true;
	}
	else 
	{
		return false;
	}
}

void Raindrop::update()
{
	y += velocity;
	velocity += gravity;

	// reset/delete and recreate
	/*if (y > ofGetHeight())
	{
		y = ofRandom
	}*/
}

void Raindrop::draw()
{
	ofPushMatrix();

	ofTranslate(x, y);
	// color stuff
	ofSetColor(0);
	ofNoFill();

	ofBeginShape();

	float t{};
	for (int i = 0; i < 50; i++)
	{
		ofVertex((1-sin(t))*cos(t)*size, -2.5*(sin(t)-1)*size);
		t += TWO_PI / 50;
	}

	ofEndShape();

	ofSetColor(0, 255, 255);
	ofFill();

	ofBeginShape();

	t = 0;
	for (int i = 0; i < 50; i++)
	{
		ofVertex((1 - sin(t))*cos(t)*size, -2.5*(sin(t) - 1) * size);
		t += TWO_PI / 50;
	}

	ofEndShape();

	ofPopMatrix();
}