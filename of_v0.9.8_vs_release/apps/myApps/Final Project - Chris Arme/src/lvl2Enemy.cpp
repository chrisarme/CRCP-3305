#include "lvl2Enemy.h"

lvl2Enemy::lvl2Enemy()
{
	enemyColor = ofColor(0, 255, 0);
	enemyShape = ofSpherePrimitive(15, 15);
	enemyShape.setPosition(ofVec3f(enemyRadius * (sin(enemyRotNumber)), ofRandom(-200, 200), enemyRadius * (cos(enemyRotNumber))));
	enemyRotSpd = .02;
}

void lvl2Enemy::draw()
{
	ofSetColor(enemyColor);
	enemyShape.draw();
}