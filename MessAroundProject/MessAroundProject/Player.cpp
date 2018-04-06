#include "Player.h"
#include <Windows.h>

extern int maxScreenSize[2];

Player::Player()
{
	playerPosition[0] = 4;
	playerPosition[1] = 4;
	playerCurrentHealth = 20;
	playerMaxHealth = 20;
}

Player::Player(int x, int y)
{
	playerPosition[0] = x;
	playerPosition[1] = y;
	playerCurrentHealth = 20;
	playerMaxHealth = 20;
}

int* Player::getPlayerPosition()
{
	return playerPosition;
}

int Player::getPlayerXPosition()
{
	return playerPosition[0];
}

int Player::getPlayerYPosition()
{
	return playerPosition[1];
}

int Player::getPlayerCurrentHealth()
{
	return playerCurrentHealth;
}

int Player::getPlayerMaxHealth()
{
	return playerMaxHealth;
}

void Player::setPlayerCurrentHealth(int health)
{
	playerCurrentHealth = health;
}

void Player::setPlayerXPosition(int xPos)
{
	playerPosition[0] = xPos;
}

void Player::setPlayerYPosition(int yPos)
{
	playerPosition[1] = yPos;
}

void Player::playerControls()
{
	if ((GetAsyncKeyState('A') & 0x8000) && (playerPosition[0] > 1))
	{
		playerPosition[0] -= 1;
	}
	else if ((GetAsyncKeyState('D') & 0x8000) && (playerPosition[0] < maxScreenSize[0] - 2))
	{
		playerPosition[0] += 1;
	}

	if ((GetAsyncKeyState('W') & 0x8000) && (playerPosition[1] > 1))
	{
		playerPosition[1] -= 1;
	}
	else if ((GetAsyncKeyState('S') & 0x8000) && (playerPosition[1] < maxScreenSize[1] - 2))
	{
		playerPosition[1] += 1;
	}
}