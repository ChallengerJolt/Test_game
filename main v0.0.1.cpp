// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> 
#include <string>
using namespace std;

int begining(string playerText, int &roomNumber)
{
	cout << "Welcome to the Maze \nType 'GameStart' to enter\nPlease note this game does not use spaces for input\n";
	cin >> playerText;
	if (playerText == "Quit", "quit")
	{
		return 0;
	}
	else if (playerText == "Gamestart", "GameStart")
	{
		return (roomNumber++);
	}
	else if (playerText != "Quit", "quit", "Gamestart", "GameStart")
	{
		cout << "Unknown Action/n Please Try Again/n";
	}
	cin >> playerText;
}


int main(string playerText, int &roomNumber)
{
	// Variables
	string playerText = "A";
	int roomNumber = 0;
	// Game start

	cin >> playerText;
	while (playerText != "Quit")
	{
		cin >> playerText;
		cin >> playerText;
		if (playerText == "GameStart")
		{
			cout << "You awake to see you are lying in a small pool of water, your memories are fuzzy you seem to\n remember that you were looking for something but nothing else.\n";
		}
		if (playerText != "GameStart")
		{
			cout << "Please spell it correctly.\n";
		}
	}
	if (playerText == "Look_around", "look_around", "Look_Around", "look_Around", "Lookaround", "LookAround", "lookaround", "lookAround")
	{
		cout << "You see an empty room the dust swirling in the air light seems to be shining from within the pool, you also notice a door on the other side of the room.\n";
	}
	else
	{
		cout << "sanity check.\n";
	}
	if (playerText == "Look_up", "look_up", "Look_Up", "look_Up", "Lookup", "LookUp", "lookup", "lookUp")
	{
		cout << "You see a small hole about your width in the ceiling.\n";
	}
}
return 0;
