#include "lvl1Enemy.h"

lvl1Enemy::lvl1Enemy()
{
	enemyColor = ofColor(0);
	enemyShape = ofSpherePrimitive(20, 20);
	enemyShape.setPosition(ofVec3f(enemyRadius * (sin(enemyRotNumber)), ofRandom(-200, 200), enemyRadius * (cos(enemyRotNumber))));
	enemyRotSpd = .01;
}

void lvl1Enemy::draw()
{
	ofSetColor(enemyColor);
	enemyShape.draw();
}