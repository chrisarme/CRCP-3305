#pragma once

#include "ofMain.h"
#include "Enemy.h"
#include <vector>

class Enemies
{
private:
	vector<Enemy> enemies;
	float startFrame;

public:
	Enemies();
	void update();
	void draw();
	void createNewEnemy();

	void destroyEnemyAtIndex(int index);

	int getEnemySize();
	ofVec3f getEnemyPosAtIndex(int index);
};