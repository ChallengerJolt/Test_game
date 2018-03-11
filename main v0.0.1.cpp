// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> 
#include <string>
using namespace std;

int Room0(string &playerText, int &roomNumber)
{
	while (roomNumber == 0)
	{
		cout << "Welcome to the Maze \nType 'GameStart' to enter\nPlease note this game does not use spaces for input\n";
		cin >> playerText;
		if (playerText == "Quit" || playerText == "quit")
		{
			return 0;
		}
		else if (playerText == "Gamestart" || playerText == "GameStart")
		{
			roomNumber++;
			return 0;
		}
		else
		{
			cout << "Unknown Action\n Please Try Again\n";
		}
	}
}


int main()
{
	// Variables
	string playerText = "A";
	int roomNumber = 0;
	bool showIntro = true;
	// Game start


	while (playerText != "Quit") //Loop start
	{
		if (showIntro == true)
		{
			Room0(playerText, roomNumber);
			showIntro = false;
		}
		cin >> playerText;
		if (roomNumber == 1)
		{
			cout << "You awake to see you are lying in a small pool of water, your memories are fuzzy you seem to\n remember that you were looking for something but nothing else.\n";
			while (roomNumber == 1)
			{

				cin >> playerText;
				if (playerText == "Lookaround" || playerText == "LookAround" || playerText == "lookaround" || playerText == "lookAround")
				{
					cout << "You see an empty room the dust swirling in the air light seems to be shining from within the pool, you also notice a door on the other side of the room.\n";
				}
				else if (playerText == "Lookup" || playerText == "LookUp" || playerText == "lookup" || playerText == "lookUp")
				{
					cout << "You see a small hole about your width in the ceiling.\n";
				}
				else if (playerText == "OpenDoor" || playerText == "Opendoor" || playerText == "opendoor" || playerText == "opendoor")
				{
					cout << "The door swings open easily\n and you see another room with three more doors.\n";
					roomNumber++;
				}
				else
				{
					cout << "Please try again.\n";
				}
			}
		}

	}


	return 0;
}
