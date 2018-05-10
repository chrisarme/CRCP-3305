#include "Enemies.h"

Enemies::Enemies()
{
	startFrame = ofGetFrameNum();
}

void Enemies::update()
{
	for (int i = 0; i < enemies.size(); i++)
	{
		enemies[i].update(startFrame);
	}
}

void Enemies::draw() 
{

	ofSetColor(0);

	for (int i = 0; i < enemies.size(); i++)
	{
		enemies[i].draw();
	}
}

void Enemies::createNewEnemy()
{
	enemies.push_back(Enemy());
}

void Enemies::destroyEnemyAtIndex(int index)
{
	enemies.erase(enemies.begin() + index);
}

int Enemies::getEnemySize()
{
	return enemies.size();
}

ofVec3f Enemies::getEnemyPosAtIndex(int index)
{
	return enemies[index].getPos();
}