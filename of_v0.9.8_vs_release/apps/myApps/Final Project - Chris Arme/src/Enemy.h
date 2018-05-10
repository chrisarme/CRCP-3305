#pragma once

#include "ofMain.h"
#include <vector>

class Enemy
{
private:
	float enemyRotDir;
	float enemyRadius;
	float enemyRotNumber;
	ofSpherePrimitive enemyShape;

public:
	Enemy();
	void update(float startFrame);
	void draw();
	
	ofVec3f getPos();

};