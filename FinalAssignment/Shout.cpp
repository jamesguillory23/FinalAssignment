// Crater.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>


//This is here so that I don't have to use std for every function
using namespace std;

void say(string shoutThis)
{
	//Shout out that cout
	cout << shoutThis << endl;
}
std::string ear(std::string PromptUser)
{
	//This will read the users input in the code
	string userInput = "";
	cout << PromptUser << endl;
	//Time to listen for the user's input
	cin >> userInput;
	//and not to return it
	return userInput;
}



