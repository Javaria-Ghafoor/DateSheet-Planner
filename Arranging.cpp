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

Arranging::Arranging(void) {}

void Arranging::planning()
{
	system("cls");
	cout << "\n                                          NOTE: never enter 0 whilst the program runs :)\n";
	cout << "\n _______________________________________________________________________________________\n";
	cout << "\n                                  DATESHEET PLAN (TM)\n";
	cout << "                              Copyright(C++) Z-Coorporation\n";
	cout << "                                 2018 All rights reserved.";
	cout << "\n _______________________________________________________________________________________\n";
	cout << "\n Please Select: \n\n";
	cout << "\n 1. Fall Semester";
	cout << "\n 2. Spring Semester";
	cout << "\n Enter response: ";
	static int I, i;
	I = check(I, i);
	switch (I)
	{
	case 1:
		for (int sem = 1; sem <= 8; sem += 2)
			if (votingdata[0][0][sem - 1][0] == 0)
			{
				cout << "Voting is must.";
				system("pause");
				exit(1);
			}
		cout << "\n ON MONDAY: \n\n";
		for (int sem = 1; sem <= 8; sem += 2)
		{
			displayCourseNo(sem, 0);
		}
		cout << "\n ON TUESDAY: \n\n";
		for (int sem = 1; sem <= 8; sem += 2)
		{
			displayCourseNo(sem, 1);
		}
		cout << "\n ON WEDNESDAY: \n\n";
		for (int sem = 1; sem <= 8; sem += 2)
		{
			displayCourseNo(sem, 2);
		}
		cout << "\n ON THURSDAY: \n\n";
		for (int sem = 1; sem <= 8; sem += 2)
		{
			displayCourseNo(sem, 3);
		}
		cout << "\n ON FRIDAY: \n\n";
		for (int sem = 1; sem <= 8; sem += 2)
		{
			displayCourseNo(sem, 4);
		}
		break;
	case 2:
		for (int i = 1; i < 8; i += 2)
			if (votingdata[0][0][i][0] == 0)
			{
				cout << "\n Voting is must.\n";
				system("pause");
				exit(1);
			}
		cout << "\n ON MONDAY: \n\n";
		for (int sem = 2; sem <= 8; sem += 2)
		{
			displayCourseNo(sem, 0);
		}
		cout << "\n ON TUESDAY: \n\n";
		for (int sem = 2; sem <= 8; sem += 2)
		{
			displayCourseNo(sem, 1);
		}
		cout << "\n ON WEDNESDAY: \n\n";
		for (int sem = 2; sem <= 8; sem += 2)
		{
			displayCourseNo(sem, 2);
		}
		cout << "\n ON THURSDAY: \n\n";
		for (int sem = 2; sem <= 8; sem += 2)
		{
			displayCourseNo(sem, 3);
		}cout << "\n ON FRIDAY: \n\n";
		for (int sem = 2; sem <= 8; sem += 2)
		{
			displayCourseNo(sem, 4);
		}
		break;
	default:
		cout << "\n Something went wrong.\n";
		system("pause");
		planning();
		break;
	}
	displayCourses(I);
	system("pause");
}

void Arranging::displayCourseNo(int sem, int day)
{
	cout << "\n Course no. " << arrangement[day][0][sem - 1] << ", semester " << sem;
	if (sem == 1 && arrangement[day][1][sem - 1] != 0)
	{
		cout << "\n Course no. " << arrangement[day][1][sem - 1] << ", semester " << sem;
	}
}

void Arranging::displayCourses(int cho)
{
	if (cho == 1)
	{
		cout << "\n\n ___SEMSTER_ONE___\n";
		sem1();
		cout << "\n\n ___SEMSTER_THREE___\n";
		sem3();
		cout << "\n\n ___SEMSTER_FIVE___\n";
		sem5();
		cout << "\n\n ___SEMSTER_SEVEN___\n";
		sem7();
	}
	else if (cho == 2)
	{
		cout << "\n\n ___SEMSTER_TWO___\n";
		sem2();
		cout << "\n\n ___SEMSTER_FOUR___\n";
		sem4();
		cout << "\n\n ___SEMSTER_SIX___\n";
		sem6();
		cout << "\n\n ___SEMSTER_EIGHT___\n";
		sem8();
	}
}

Arranging::~Arranging(void) {}
