#pragma once
#include "ofMain.h"

class Triangle
{
private:
	double sRotation;
	double tRotation;
	double size;
	ofColor color;
	of3dPrimitive triangleShape;
	ofMesh triangleMesh;

public:
	Triangle();
	Triangle(double rotation, double tRotation, double size, ofColor color);
	void draw();
};