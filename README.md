# Test_game
A testing location for me to work on a simple text game to build up my c++ knowledge im very bad right now so dont expect much from me ;)
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

	// Game start
	cout << "Welcome to the Maze \nType 'GameStart' to enter\nPlease note this game does not use spaces for input\n";
	cin >> playerText;
	while (playerText != "Quit")
	{
		if (playerText == "GameStart")
		{
			cout << "You awake to see you are lying in a small pool of water, your memories are fuzzy you seem to\n remember that you were looking for something but nothing else.";
		}
		else if (playerText != "GameStart")
		{
			cout << "Please spell it correctly.";
		}
		cin >> playerText;
		if (playerText == "Lookaround", "LookAround", "lookaround", "lookAround")
		{
			cout << "You see an empty room the dust swirling in the air light seems to be shining from within the pool, you also notice a door on the other side of the room.";
		}
		else if
		{
			cout << "Please try again."
		}
		cin >> playerText;
		if (playerText == "Lookup", "LookUp", "lookup", "lookUp")
		{
			cout << "You see a small hole about your width in the ceiling.";
		}
	}
	return 0;
}
