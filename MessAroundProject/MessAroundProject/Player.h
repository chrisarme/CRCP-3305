#pragma once

class Player
{
private:
	int playerPosition[2];
	int playerCurrentHealth;
	int playerMaxHealth;
	int playerAC;

public:

	Player();
	Player(int x, int y);
	int* getPlayerPosition();
	int getPlayerXPosition();
	int getPlayerYPosition();
	int getPlayerCurrentHealth();
	int getPlayerMaxHealth();
	void setPlayerXPosition(int xPos);
	void setPlayerYPosition(int yPos);
	void setPlayerCurrentHealth(int health);
	void playerControls();
};