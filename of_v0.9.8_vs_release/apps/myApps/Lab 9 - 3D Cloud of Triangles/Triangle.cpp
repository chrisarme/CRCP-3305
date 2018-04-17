#include "Triangle.h"

Triangle::Triangle()
{
	rotation = ofRandom(0, 360);
	size = ofRandom(1, 10);
	color = ofColor(ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255));

	triangleMesh.addVertex(ofPoint(-2, -2, 0));
	triangleMesh.addVertex(ofPoint(2, -2, 0));
	triangleMesh.addVertex(ofPoint(0, 2, 0));

	triangleShape = of3dPrimitive(triangleMesh);
}

Triangle::Triangle(double rotation, double size, ofColor color)
{
	this->rotation = rotation;
	this->size = size;
	this->color = color;

	triangleMesh.addVertex(ofPoint(-2, -2, 0));
	triangleMesh.addVertex(ofPoint(2, -2, 0));
	triangleMesh.addVertex(ofPoint(0, 2, 0));

	triangleShape = of3dPrimitive(triangleMesh);
}

void Triangle::draw()
{
	ofSetColor(color);

	trianglePrimitive.setPosition(20 * cos(ofDegToRad(45)) * sin(ofDegToRad(45)), 20 * sin(ofDegToRad(45)) * sin(ofDegToRad(45)), 20 * cos(ofDegToRad(45)));
	trianglePrimitive.setOrientation(ofQuaternion(0, ofVec3f(1, 0, 0), 45, ofVec3f(0, 1, 0), 45, ofVec3f(0, 0, 1)));
}