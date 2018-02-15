#include <iostream>
#include <string>
#include <vector>
#include <array>

using namespace std;
using std::vector;

class Player
{
	vector<string> bag;

public:

	void addItemToBad(string object)
	{
		bag.push_back(object);
	}

	void displayInventory()
	{
		for (string item : bag)
		{
			cout << item << endl;
		}
	}
};

class GameController
{
	Player player;
	vector<string> commandList;
public:

	GameController()
	{
		commandList.push_back("add");
		commandList.push_back("drop");
		commandList.push_back("grab");
		commandList.push_back("show");
	}

	string parseInput(string rawInput)
	{
		string parseString;

		for (int i = 0; i < rawInput.length(); i++)
		{
			if (rawInput[i] != ' ')
			{
				parseString = parseString + rawInput[i];
			}
		}

		for (int i = 0; i < parseString.length(); i++)
		{
			parseString[i] = tolower(parseString[i]);
		}

		return parseString;
	}

	void readForCommand(string playerInput)
	{
		string inputSubstr;

		for (string command: commandList)
		{
			if (playerInput.length() >= command.length())
			{
				inputSubstr = playerInput.substr(0, command.length());
				
				if (inputSubstr == command)
				{
					if (command == "add")
					{
						player.addItemToBad(playerInput.substr(command.length(), playerInput.length()));
					}

					cout << "Got It!" << endl << endl;
					if (command == "show")
					{
						player.displayInventory();
					}
				}
			}
		}
	}

	void checkAndRespondToInput()
	{
		string playerInput;
		string parsedPlayerChoice;
		string choiceCheck;

		cin.clear();
		getline(cin, playerInput);

		parsedPlayerChoice = parseInput(playerInput);

		readForCommand(parsedPlayerChoice);
	}
};

int main()
{
	GameController gameController = GameController();

	while (true)
	{
		gameController.checkAndRespondToInput();

		system("PAUSE");
	}

	return 0;
}