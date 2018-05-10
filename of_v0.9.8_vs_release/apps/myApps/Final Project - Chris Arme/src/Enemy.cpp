#include "Enemy.h"

Enemy::Enemy()
{
	enemyRadius = 200;
	enemyRotNumber = ofRandom(0, TWO_PI);

	enemyShape = ofSpherePrimitive(20, 20);
	enemyShape.setPosition(ofVec3f(enemyRadius * (sin(enemyRotNumber)), ofRandom(-200, 200),  enemyRadius * (cos(enemyRotNumber))));
}

void Enemy::update(float startFrame)
{
	enemyRadius -= .2 + (.00000001 * (ofGetFrameNum() - startFrame));

	if (enemyRotNumber >= TWO_PI)
	{
		enemyRotNumber = 0;
	}

	enemyRotDir = ofRandom(-1, 1) / 100;
	enemyRotNumber += .01 + (.00000001 * (ofGetFrameNum() - startFrame));

	enemyShape.setPosition(ofVec3f(enemyRadius * (sin(enemyRotNumber)), (enemyShape.getY() - (enemyShape.getY() / enemyRadius / 10)), enemyRadius * (cos(enemyRotNumber))));
}

void Enemy::draw()
{
	enemyShape.draw();
}

ofVec3f Enemy::getPos()
{
	return enemyShape.getPosition();
}