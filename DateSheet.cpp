#include "Header.h"
#include <iostream>

using namespace std;

template <typename A>
A check(A a, A chk)
{
	static Java* J;
	do a = J->Check(a, chk); while (chk == a);
	return a;
}

DateSheet::DateSheet()
{
	cout << "\n        NOTE: never enter 0 whilst the program runs :)\n";
	cout << "\n Before proceeding with the date sheet planner program,\n you are required to enter the name of exam.\n";
	notice();
	welcome();
}

void DateSheet::notice(void)
{
	cout << "\n Please enter 1, 2 or 3 to proceed:\n\n";
	cout << " 1. OHT1\n";
	cout << " 2. OHT2\n";
	cout << " 3. Exit\n";
	cout << "\n Enter response: ";
	static int I, i;
	I = check(I, i);
	switch (I)
	{
	case 1:
		exam = "OHT1";
		break;
	case 2:
		exam = "OHT2";
		break;
	case 3:
		exit(1);
	default:
		cout << "\n Invalid Input.";
		notice();
	}
}

void DateSheet::welcome(void)
{
	static int I, i;
	do
	{
		system("cls");
		cout << "\n                                          NOTE: never enter 0 whilst the program runs :)\n";
		cout << "\n _______________________________________________________________________________________\n";
		cout << "\n                               DATE SHEET PLANNER(TM)\n";
		cout << "                              Copyright(C++) Z-Coorporation\n";
		cout << "                                 2018 All rights reserved.";
		cout << "\n _______________________________________________________________________________________\n";
		cout << "\n Welcome to the Date Sheet Planner - it'll plan the date sheet for you :D\n";
		cout << "\n Please enter 1, 2 or 3 to proceed:\n\n";
		cout << " 1. Open Voting Pole for " << exam << " Date Sheet\n";
		cout << " 2. Prompt Program to plan Date Sheet\n";
		cout << " 3. Exit\n";
		cout << "\n Enter response: ";
		I = check(I, i);
		switch (I)
		{
		case 1:
			Voter.voting();
			Counter.counting();
			break;
		case 2:
			Planner.planning();
			break;
		default:
			cout << "\n Invalid Input.";
			welcome();
			break;
		}
	} while (I != 3);
}

DateSheet::~DateSheet(void) {}
