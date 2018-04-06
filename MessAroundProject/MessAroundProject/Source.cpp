#include <iostream>
#include <string>
#include <vector>
#include <Windows.h>
#include <conio.h>

#include "Source.h"

#define CLOCKS_PER_MS (CLOCKS_PER_SEC / 1000)

using namespace std;
using std::vector;

void ShowConsoleCursor(bool showFlag)
{
	HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);

	CONSOLE_CURSOR_INFO     cursorInfo;

	GetConsoleCursorInfo(out, &cursorInfo);
	cursorInfo.bVisible = showFlag; // set the cursor visibility
	SetConsoleCursorInfo(out, &cursorInfo);
}

void drawASCIIScreen(int xMax, int yMax)
{
	for (int y = 0; y < yMax; y++)
	{
		for (int x = 0; x < xMax; x++)
		{
			cout << " ";
			if (x == player.getPlayerXPosition() && y == player.getPlayerYPosition())
			{
				cout << '@';
			}
			else if ((x == enemy.getEnemyXPosition() && y == enemy.getEnemyYPosition()))
			{
				cout << 'E';
			}
			else if (x == 0 || x == xMax - 1 || y == 0 || y == yMax - 1)
			{
				cout << '#';
			}
			else
			{
				cout << " ";
				//cout << (unsigned char)178;
			}
		}

		if (y == 0)
		{
			cout << "   HP: " << player.getPlayerCurrentHealth() << '/' << player.getPlayerMaxHealth();
		}

		cout << endl;
	}
}

void setup()
{
	ShowConsoleCursor(false);

	player = Player();
	enemy = Enemy();

	maxScreenSize[0] = 31;
	maxScreenSize[1] = 21;
	
	quitProgram = false;
}

int main()
{
	setup();
	while (!quitProgram)
	{
		drawASCIIScreen(maxScreenSize[0], maxScreenSize[1]);
		_getch();

		player.playerControls();
		enemy.enemyControls();

		system("cls");
	}
}