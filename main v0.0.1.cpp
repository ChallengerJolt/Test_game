// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> 
#include <string>
using namespace std;

int main()
{
	// Variables
	string playerText = "A";
	int roomNumber = 0;
	bool showIntro = true;
	bool key1 = false;
	bool key2 = false;
	// Game start


	while (playerText != "Quit") //Loop start
	{
		if (showIntro == true)
		{
			Room0(playerText, roomNumber);
			showIntro = false;
		}
		if (roomNumber == 1)
		{
			Room1(playerText, roomNumber);
		}
		if (roomNumber == 2)
		{
			Room2(playerText, roomNumber, key1, key2);
		}
	}
	return 0;
}

int Room0(string &playerText, int &roomNumber)
{
	while (roomNumber == 0) // Loop Start
	{
		cout << "Welcome to the Maze \nType 'GameStart' to enter\nPlease note this game does not use spaces for input\n";
		cin >> playerText;
		if (playerText == "Gamestart" || playerText == "GameStart")
		{
			return roomNumber = 1;
		}
		else if (playerText == "Quit" || playerText == "quit")
		{
			return 0;
		}
		else
		{
			cout << "Unknown Action\nPlease Try Again\n";
		}
	}
}
int Room1(string &playerText, int &roomNumber)
{
	cout << "You awake to see you are lying in a small pool of water, your memories are fuzzy you seem to\n remember that you were looking for something but nothing else.\n";
	while (roomNumber == 1)
	{

		cin >> playerText;
		if (playerText == "Lookaround" || playerText == "lookaround")
		{
			cout << "You see an empty room the dust swirling in the air light seems to be shining from within the pool, you also notice a door on the other side of the room.\n";
		}
		else if (playerText == "Lookup" || playerText == "lookup")
		{
			cout << "You see a small hole about your width in the ceiling.\n";
		}
		else if (playerText == "OpenDoor" || playerText == "opendoor")
		{
			cout << "The door swings open easily\n and you walk into another room and see three more doors.\n";
			return roomNumber = 2;
		}
		else if (playerText == "Quit" || playerText == "quit")
		{
			return 0;
		}
		else
		{
			cout << "Unknown Action\n Please Try Again\n";
		}
	}
}
int Room2(string &playerText, int &roomNumber, bool &key1, bool &key2)
{
	while (roomNumber == 2)
	{
		cin >> playerText;
		if (playerText == "Lookaround" || playerText == "lookaround")
		{
			cout << "The room seems to be free of dust\n but there seems to be nothing of note in this room aside from the three doors.\n The door on the left is made from iron.\n The center door seems to be made from marble.\n The door to the right seems to be made out of wood.\n";
		}
		else if (playerText == "Examineleftdoor" || playerText == "examineleftdoor")
		{
			cout << "The Left door seems to be a very simple iron door\n with no discerning marks on it besides a door handle.\n";
		}
		else if (playerText == "Openleftdoor" || playerText == "openleftdoor")
		{
			if (key1 == false)
			{
				cout << "The left door handle wont budge you see a key hole just above it\n looking through it shows nothing but a pitch blackness.\n";
			}
			else
			{
				cout << "The door opens with a click on the other side you see a room full of snow\n the room doesnt feel cold but the snow does it is a strange feeling.\n There is two more doors one directly infront of you and one to your left.\n";
				return roomNumber = 4;
			}
		}
		else if (playerText == "Examinerightdoor" || playerText == "examinerightdoor")
		{
			cout << "The Right door seems to be a very strange wood door\n the wood seems slick with a red liquid and the door handle\n seems to be fashioned out of some form of red crystal.\n";
		}
		else if (playerText == "Openrightdoor" || playerText == "openrightdoor")
		{
			if (key2 == false)
			{
				cout << "The right door handle wont budge you see a key hole just above it\n looking through it shows nothing but a pitch blackness.\n";
			}
			else
			{
				cout << "The door opens with a click on the other side you see a room with a pool full\n of a deep red liquid, the corpse of some maner of sea creature floats in it.\n There is only one other door directly infront of you on the other side of the creature.\n";
				return roomNumber = 5;
			}
		}
		else if (playerText == "Examinecenterdoor" || playerText == "examinecenterdoor")
		{
			cout << "The marble door seems quite heavy and the handle is but a simple pull handle\n";
		}
		else if (playerText == "Opencenterdoor" || playerText == "opencenterdoor")
		{
			cout << "The marble door pulls quite easily despite its immense weight,\n what lies beyond is a white room with one bright blue door on the other side.\n";
			return roomNumber = 3;
		}
		else if (playerText == "Quit" || playerText == "quit")
		{
			return 0;
		}
		else
		{
			cout << "Unknown Action\n Please Try Again\n";
		}
	}

}
