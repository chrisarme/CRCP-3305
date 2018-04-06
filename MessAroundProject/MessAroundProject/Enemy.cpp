#include "Enemy.h"
#include <cstdlib>

extern int maxScreenSize[2];

Enemy::Enemy()
{
	enemyPosition[0] = 10;
	enemyPosition[1] = 10;
}
Enemy::Enemy(int x, int y)
{

}
int* Enemy::getEnemyPosition()
{
	return enemyPosition;
}

int Enemy::getEnemyXPosition()
{
	return enemyPosition[0];
}

int Enemy::getEnemyYPosition()
{
	return enemyPosition[1];
}

int Enemy::getEnemyCurrentHealth()
{
	return enemyCurrentHealth;
}

int Enemy::getEnemyMaxHealth()
{
	return enemyMaxHealth;
}

void Enemy::setEnemyXPosition(int xPos)
{
	enemyPosition[0] = xPos;
}

void Enemy::setEnemyYPosition(int yPos)
{
	enemyPosition[1] = yPos;
}

void Enemy::setEnemyCurrentHealth(int health)
{
	enemyCurrentHealth = health;
}

void Enemy::enemyControls(int playerXPos, int playerYPos)
{
	int randomMovement = rand() % 4;
	
	switch (randomMovement)
	{
	case 0:
		if (enemyPosition[0] > 1)
		{
			enemyPosition[0] -= 1;
		}
		break;
	case 1:
		if (enemyPosition[0] < maxScreenSize[0] - 2)
		{
			enemyPosition[0] += 1;
		}
		break;
	case 2:
		if (enemyPosition[1] > 1)
		{
			enemyPosition[1] -= 1;
		}
		break;
	case 3:
		if (enemyPosition[1] < maxScreenSize[1] - 2)
		{
			enemyPosition[1] += 1;
		}
		break;
	}
}