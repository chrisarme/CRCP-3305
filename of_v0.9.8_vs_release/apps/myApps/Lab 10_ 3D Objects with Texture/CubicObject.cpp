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
	//boxes[0].setPosition(ofVec3f(xPos, yPos, zPos));
	////}
	//boxes[1].setPosition(ofVec3f(xPos + (width / 2), yPos, zPos));
	//boxes[2].setPosition(ofVec3f(xPos - (width / 2), yPos, zPos));
	//boxes[3].setPosition(ofVec3f(xPos, yPos + (height / 2), zPos));
	//boxes[4].setPosition(ofVec3f(xPos, yPos - (height / 2), zPos));
	//boxes[5].setPosition(ofVec3f(xPos, yPos, zPos + (depth / 2)));
	//boxes[6].setPosition(ofVec3f(xPos, yPos, zPos - (depth / 2)));

	boxes[0].setPosition(ofVec3f(0, 0, 0));
	
	boxes[1].setPosition(ofVec3f((width / 2), 0, 0));
	boxes[2].setPosition(ofVec3f(0 -(width / 2), 0, 0));
	boxes[3].setPosition(ofVec3f(0, (height / 2), 0));
	boxes[4].setPosition(ofVec3f(0, -(height / 2), 0));
	boxes[5].setPosition(ofVec3f(0, 0, (depth / 2)));
	boxes[6].setPosition(ofVec3f(0, 0, -(depth / 2)));

	ofLoadImage(texture, "purpleTexture.jpg");

	xRotation = 0;
	yRotation = 0;
}

void CubicObject::draw()
{
	ofSetRectMode(OF_RECTMODE_CENTER);

	texture.bind();

	ofPushMatrix();
	ofTranslate(xPos, yPos, zPos);
	ofRotateX(xRotation);
	ofRotateY(yRotation);
	for (int i = 0; i < boxes.size(); i++)
	{
		//ofSetColor(color);
		boxes[i].draw();
	}
	ofPopMatrix();
	texture.unbind();
}

void CubicObject::update()
{
	// do nothing! feel good!
}

void CubicObject::rotate()
{
	xRotation -= 1;
	yRotation += 1;
}