#include "Triangle.h"

Triangle::Triangle()
{
	sRotation = ofRandom(0, 360);
	size = ofRandom(1, 5);
	color = ofColor(ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255));

	triangleMesh.addVertex(ofPoint(-2, -2, 0));
	triangleMesh.addVertex(ofPoint(2, -2, 0));
	triangleMesh.addVertex(ofPoint(0, 2, 0));

	triangleShape = of3dPrimitive(triangleMesh);
}

Triangle::Triangle(double sRotation, double tRotation, double size, ofColor color)
{
	this->sRotation = sRotation;
	this->tRotation = tRotation;
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

	triangleShape.setPosition(20 * cos(ofDegToRad(sRotation)) * sin(ofDegToRad(tRotation)), 20 * sin(ofDegToRad(sRotation)) * sin(ofDegToRad(tRotation)), 20 * cos(ofDegToRad(tRotation)));
	triangleShape.setOrientation(ofQuaternion(0, ofVec3f(1, 0, 0), sRotation, ofVec3f(0, 1, 0), tRotation, ofVec3f(0, 0, 1)));
	triangleShape.setScale(ofVec3f(size, size, size));
	triangleShape.draw();
}