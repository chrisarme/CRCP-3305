#pragma once

class Enemy
{
private:
	int enemyPosition[2];
	int enemyCurrentHealth;
	int enemyMaxHealth;
	int enemyAC;

public:

	Enemy();
	Enemy(int x, int y);
	int* getEnemyPosition();
	int getEnemyXPosition();
	int getEnemyYPosition();
	int getEnemyCurrentHealth();
	int getEnemyMaxHealth();
	void setEnemyXPosition(int xPos);
	void setEnemyYPosition(int yPos);
	void setEnemyCurrentHealth(int health);
	void enemyControls(int playerXPos, int playerYPos);
};