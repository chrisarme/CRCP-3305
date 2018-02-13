#include <iostream>
#include <string>
#include <vector>
#include <array>

using namespace std;
using std::vector;

class Player
{

};

class GameController
{
	
};

int main()
{
	GameController gameController;
	Player player;
	string playerChoice;
	string choiceCheck;

	while (true)
	{
		cin.clear();
		getline(cin, playerChoice);
		
		for (int i = 0; i < playerChoice.length(); i++)
		{
			playerChoice[i] = tolower(playerChoice[i]);
		}

		choiceCheck = playerChoice.substr(0, 5);

		if (choiceCheck.find("add") != string::npos)
		{
			if (choiceCheck.substr(0, 4) == "add ")
			{
				cout << "Got It!" << endl;
			}
		}

		system("PAUSE");
	}

	return 0;
}