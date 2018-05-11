#include "Enemies.h"

Enemies::Enemies()
{
	startFrame = ofGetFrameNum();
}

void Enemies::update()
{
	for (int i = 0; i < enemies.size(); i++)
	{
		enemies[i]->update(startFrame);
	}
}

void Enemies::draw() 
{

	ofSetColor(0);

	for (int i = 0; i < enemies.size(); i++)
	{
		enemies[i]->draw();
	}
}

void Enemies::createNewEnemy()
{
	float randomNum = ofRandom(0, 100);
	if (randomNum < 50)
	{
		enemies.push_back(new lvl1Enemy());
	}
	else if (randomNum > 50 && randomNum < 85)
	{
		enemies.push_back(new lvl2Enemy());
	}
	else if (randomNum > 85)
	{

	}
}

void Enemies::destroyEnemyAtIndex(int index)
{
	delete enemies[index];
	enemies[index] = nullptr;

	enemies.erase(enemies.begin() + index);
}

int Enemies::getEnemySize()
{
	return enemies.size();
}

ofVec3f Enemies::getEnemyPosAtIndex(int index)
{
	return enemies[index]->getPos();
}