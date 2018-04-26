//
//

#include "stdafx.h"
#include <cstdlib>
#include <string>


int command()

{
	say("Welcome to Alia where we use Crater...");

	std::string userName = "";

	userName = ear("Crater has ears to hear so tell us something. Let's be simple what's your name?");

	say("Greetings " + userName);

	system("pause");
	return 0;
}