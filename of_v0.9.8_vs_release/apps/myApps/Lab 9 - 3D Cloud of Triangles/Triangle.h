#pragma once
#include "ofMain.h"

class Triangle
{
private:
	double rotation;
	double size;
	ofColor color;
	of3dPrimitive triangleShape;
	ofMesh triangleMesh;

public:
	Triangle();
	Triangle(double rotation, double size, ofColor color);
	void draw();
};