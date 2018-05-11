#pragma once

#include "ofMain.h"
#include <vector>

class Enemy
{
protected:
	float enemyRotDir;
	float enemyRadius;
	float enemyRotNumber;
	float enemyRotSpd;
	int enemyHealth;
	ofSpherePrimitive enemyShape;
	ofColor enemyColor;

public:
	Enemy();
	void update(float startFrame);
	virtual void draw() = 0;
	
	ofVec3f getPos();

};