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
			if (x == characterPosition[0] && y == characterPosition[1])
			{
				cout << "@";
			}
			else if (x == 0 || x == xMax - 1 || y == 0 || y == yMax - 1)
			{
				cout << "#";
			}
			else
			{
				cout << " ";
				//cout << (unsigned char)178;
			}
		}

		cout << endl;
	}
}

void setup()
{
	ShowConsoleCursor(false);

	characterPosition[0] = 4;
	characterPosition[1] = 4;
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

		if ((GetAsyncKeyState('A') & 0x8000) && (characterPosition[0] > 0))
		{
			characterPosition[0] -= 1;
		}
		else if ((GetAsyncKeyState('D') & 0x8000) && (characterPosition[0] < maxScreenSize[0] - 1))
		{
			characterPosition[0] += 1;
		}

		if ((GetAsyncKeyState('W') & 0x8000) && (characterPosition[1] > 0))
		{
			characterPosition[1] -= 1;
		}
		else if ((GetAsyncKeyState('S') & 0x8000) && (characterPosition[1] < maxScreenSize[1] - 1))
		{
			characterPosition[1] += 1;
		}
		system("cls");
	}
}