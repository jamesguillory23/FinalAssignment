// ConsoleApplication12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <chrono>
#include <string>

using namespace std;

//Voiding the minutes and seconds of Excercise
void MinutesOfExxercising(int MinuteExercise, int SecondsExercise);
void MinutesOfSitting(const int* MinutesExercise, const int* SecondsExercise);

int main()
{

	string userName = "";
	//bot threatens to call user sprinkles.
	string* puserName = &userName;
	cout << "Welcome flesh bag. I'm your average timer simulation. My name is RINGRINGGetUP!" << endl;
	//THe sprinkles is because I love making up names
	cout << "Tell me your name or I shall nickname you sprinkles: " << endl;
	cin >> userName;
	//The following is not meant to shame or discourage the user. Viewer discretion is advised
	cout << "My job is to get your lazy bum out of that seat and walk the street. That's right I'm an exercise clock.\n";
	//The term lazy is used because the user shouldn't be on the computer for such a long time.
	cout << "Your superiors has tasked me to make you do 15 minutes of stretching, excercise, or any type of get off your butt and move prompts.\n";
	


	//get the start time
	auto start = chrono::steady_clock::now();
	auto end = chrono::steady_clock::now();
	long deltaTime_nS = 0;
	long nanoseconds, milliseconds, seconds, minutes;
	nanoseconds = milliseconds = seconds = minutes = 0;

	while (1)
	{
		start = chrono::steady_clock::now();
		deltaTime_nS = long(chrono::duration_cast <std::chrono::nanoseconds> (end - start).count());
		end = chrono::steady_clock::now();

		nanoseconds += -deltaTime_nS;

		if (nanoseconds > 1000000)
		{
			nanoseconds = 0; 
			milliseconds++;
		}
		
		if (milliseconds > 1000)
		{
			milliseconds = 0;
			seconds++;
		}
		if (seconds > 60)
		{
			seconds = 0;
			minutes++;
		}
		//output
		cout << "\rElapsed Time: " << minutes << ":" << seconds;

		//After certain intervals I have the computer say certain things to give personality
		
		if (minutes == 2)
		{
			//Apparantly he's a drill sergeant
			cout << "Alright let's keep that blood pumping flsh bag. Now drop and give me 20. I always wanted to say that ^_^.\n";
		}

		if (minutes == 5)
		{ 
			//He actually cares about the user. Surprising I designed him to just do commands and such but now he has a personallity
			cout << "So hows your evening going? You don't have to answer that, I know it's painful from the exercise.\n";	
			//Don't know why he gave such an awkward face but at least he's thinking positive.
			cout << "think about it this way you're at least getting healthier thanks to me ._.";
		}

		if (minutes == 15)
		{
			//Well this is the end of the 15 minuite exercises...for now.
			cout << "Alright that's 15 minutes " << *puserName << "Time to get back on the chair and enjoy our economic despair.";
		}
	}

	system("pause");
	return 0;
}

