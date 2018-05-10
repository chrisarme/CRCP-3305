#pragma once

#include "ofMain.h"
#include <vector>

class Player
{
private:
	vector<ofBoxPrimitive> bullets;

public:
	Player() = default;
	void addBullet(ofQuaternion dir);
	void update();
	void draw();
	void checkAndRemoveBullet();
	void destroyBulletAtIndex(int index);

	int getBulletSize();
	ofVec3f getBulletPosAtIndex(int index);
};