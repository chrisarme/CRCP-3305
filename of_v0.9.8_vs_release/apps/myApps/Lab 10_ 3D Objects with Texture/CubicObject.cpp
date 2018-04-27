#include "CubicObject.h"

CubicObject::CubicObject(double x, double y, double z, int height, int width, int depth, ofColor color)
{
	xPos = x;
	yPos = y;
	zPos = z;
	this->height = height;
	this->width = width;
	this->depth = depth;
	this->color = color;
}

void CubicObject::setup()
{
	boxes.push_back(ofBoxPrimitive(width, height, depth));
	
	for (int i = 0; i < 6; i++)
	{
		boxes.push_back(ofBoxPrimitive(width  / 2, height / 2, depth / 2));
	}

	//for (int i = 0; i < boxes.size(); i++)
	//{
	boxes[0].setPosition(ofVec3f(xPos, yPos, zPos));
	//}
	boxes[1].setPosition(ofVec3f(xPos + (width / 2), yPos, zPos));
	boxes[2].setPosition(ofVec3f(xPos - (width / 2), yPos, zPos));
	boxes[3].setPosition(ofVec3f(xPos, yPos + (height / 2), zPos));
	boxes[4].setPosition(ofVec3f(xPos, yPos - (height / 2), zPos));
	boxes[5].setPosition(ofVec3f(xPos, yPos, zPos + (depth / 2)));
	boxes[6].setPosition(ofVec3f(xPos, yPos, zPos - (depth / 2)));
}

void CubicObject::draw()
{
	ofSetRectMode(OF_RECTMODE_CENTER);

	for (int i = 0; i < boxes.size(); i++)
	{
		//ofSetColor(color);
		ofPushMatrix();
		//ofTranslate();
		boxes[i].draw();
		ofPopMatrix();
	}
}