#include "Triangle.h"

Triangle::Triangle()
{
	size = ofRandom(1, 5);
	color = ofColor(ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255));

	centerOfTriangle = ofPoint(ofRandom(-1, 1), ofRandom(-1, 1), ofRandom(-1, 1));
	centerOfTriangle.normalize();
	centerOfTriangle = centerOfTriangle * 20;

	vectors[0] = centerOfTriangle + (ofPoint(-10, -10, 0) * size);
	vectors[1] = centerOfTriangle + (ofPoint(0, 10, 0) * size);
	vectors[2] = centerOfTriangle + (ofPoint(10, -10, 0) * size);
}

Triangle::Triangle(double size, ofColor color, double rotation, double radius)
{
	this->size = size;
	this->color = color;
	this->rotation = rotation;
	
	centerOfTriangle = ofPoint(ofRandom(-1, 1), ofRandom(-1, 1), ofRandom(-1, 1));
	centerOfTriangle.normalize();
	centerOfTriangle = centerOfTriangle * radius;

	vectors[0] = centerOfTriangle + (ofPoint(-10, -10, 0) * size);
	vectors[1] = centerOfTriangle + (ofPoint(0, 10, 0) * size);
	vectors[2] = centerOfTriangle + (ofPoint(10, -10, 0) * size);
}

void Triangle::draw()
{

	ofPushMatrix();

		ofSetColor(color);

		float time = ofGetElapsedTimef();
		float angle = time * 10;
		ofRotate(angle, 0, 1, 0);

		ofRotate(rotation, 1, 1, 1);

		ofDrawTriangle(vectors[0], vectors[1], vectors[2]);

	ofPopMatrix();
}