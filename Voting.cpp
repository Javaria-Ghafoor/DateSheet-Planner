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

Voting::Voting(void) {}

void Voting::voting(void)
{
	system("cls");
	cout << "\n                                          NOTE: never enter 0 whilst the program runs :)\n";
	cout << "\n _______________________________________________________________________________________\n";
	cout << "\n                                  VOTING POLE (TM)\n";
	cout << "                              Copyright(C++) Z-Coorporation\n";
	cout << "                                 2018 All rights reserved.";
	cout << "\n _______________________________________________________________________________________\n";
	cout << "\n Welcome to the Voting Pole :D\n";
	cout << "\n Please enter 1 or 2 to proceed:\n\n";
	cout << " 1. Login and Vote.\n";
	cout << " 2. Exit\n";
	cout << "\n Enter response: ";
	static int I, i;
	I = check(I, i);
	switch (I)
	{
	case 1:
		vote();
		break;
	case 2:
		exit(1);
		break;
	default:
		cout << "\n Invalid Input.";
		voting();
		break;
	}
}

void Voting::vote(void)
{
	static int a, b, c, d, e, f, g, h;
	do
	{
		system("cls");
		cout << "\n                                          NOTE: never enter 0 whilst the program runs :)\n";
		cout << "\n _______________________________________________________________________________________\n";
		cout << "\n                                  VOTING POLE (TM)\n";
		cout << "                              Copyright(C++) Z-Coorporation\n";
		cout << "                                 2018 All rights reserved.";
		cout << "\n _______________________________________________________________________________________\n";
		cout << "\n Welcome to the Voting Pole - Students...\n";
		cout << " ... vote by heart, sincerely and responsibly :D\n\n";
		cout << " <To continue with voting pole enter 1, else enter 2>\n";
		cout << "\n Enter response: ";
		static int I, i;
		I = check(I, i);
		if (I == 2)
		{
			i = I = 0;
			break;
		}
		else if (I == 1)
		{
			i = I = 0;
			User.login();
			cout << "\n Enter your semester number: ";
			I = check(I, i);
			switch (I)
			{
			case 1:
				sem = 1;
				for (int k = 0; k < 5; k++)
				{
					block(k);
					sem1();
					i = I = 0;
					cout << "\n Enter response: ";
					I = check(I, i);
					if (!(k == 0 || k == 3) && I > 0 && I < 8)
					{
						votingdata[k][0][0][a] = I;
					}
					else if ((k == 0 || k == 3) && I > 0 && I < 8)
					{
						cout << "\n You must input two courses for this day.\n";
						k--;
						system("pause");
					}
					else if (I > 10)
					{
						if (k == 0 || k == 3)                               //if Monday or Thursday
						{
							int x, y;
							x = I / 10;
							y = I - x * 10;
							votingdata[k][0][0][a] = x;
							votingdata[k][1][0][a] = y;
						}
						else
						{
							cout << "\n You cannot input two subjects for this day\n";
							k--;
							system("pause");
						}
					}
					else
					{
						cout << "Wrong Input.";
						k--;
						system("pause");
					}
				}
				a++;
				break;
			case 2:
				sem = 2;
				for (int k = 0; k < 5; k++)
				{
					block(k);
					sem2();
					i = I = 0;
					cout << "\n Enter response: ";
					I = check(I, i);
					votingdata[k][0][1][b] = I;
				}
				b++;
				break;
			case 3:
				sem = 3;
				for (int k = 0; k < 5; k++)
				{
					block(k);
					sem3();
					i = I = 0;
					cout << "\n Enter response: ";
					I = check(I, i);
					votingdata[k][0][2][c] = I;
				}
				c++;
				break;
			case 4:
				sem = 4;
				for (int k = 0; k < 5; k++)
				{
					block(k);
					sem4();
					i = I = 0;
					cout << "\n Enter response: ";
					I = check(I, i);
					votingdata[k][0][3][d] = I;
				}
				d++;
				break;
			case 5:
				sem = 5;
				for (int k = 0; k < 5; k++)
				{

					block(k);
					sem5();
					i = I = 0;
					cout << "\n Enter response: ";
					I = check(I, i);
					votingdata[k][0][4][e] = I;
				}
				e++;
				break;
			case 6:
				sem = 6;
				for (int k = 0; k < 5; k++)
				{
					block(k);
					sem6();
					i = I = 0;
					cout << "\n Enter response: ";
					I = check(I, i);
					votingdata[k][0][5][f] = I;
				}
				f++;
				break;
			case 7:
				sem = 7;
				for (int k = 0; k < 5; k++)
				{
					block(k);
					sem7();
					i = I = 0;
					cout << "\n Enter response: ";
					I = check(I, i);
					votingdata[k][0][6][g] = I;
				}
				g++;
				break;
			case 8:
				sem = 8;
				for (int k = 0; k < 5; k++)
				{
					block(k);
					sem8();
					i = I = 0;
					cout << "\n Enter response: ";
					I = check(I, i);
					votingdata[k][0][7][h] = I;
				}
				h++;
				break;
			default:
				cout << "\n Invalid Input.";
				vote();
				break;
			}
		}
		else
		{
			I = i = 0;
			cout << "\n Invalid Input.";
			system("pause");
		}
	} while (1);
}

void Voting::block(int K) const
{
	system("cls");
	cout << "\n                                          NOTE: never enter 0 whilst the program runs :)\n";
	cout << "\n _______________________________________________________________________________________\n";
	cout << "\n                                  VOTING POLE (TM)\n";
	cout << "                              Copyright(C++) Z-Coorporation\n";
	cout << "                                 2018 All rights reserved.";
	cout << "\n _______________________________________________________________________________________\n";
	cout << "\n Vote step by step for each day of the week for semester " << sem << ":\n";
	cout << "\n (To enter 2 responses for a day, enter the unified integer";
	cout << "\n the individual integers make. e.g. enter 25 for 2 and 5.";
	cout << "\n NOTE: 2 responses may only be given for courses > 5 on Monday and Thursday only.";
	cout << "\n And for courses < 5 specify which day to be off)";
	switch (K)
	{
	case 0:
		cout << "\n\n ___MONDAY___\n\n";
		break;
	case 1:
		cout << "\n\n ___TUESDAY___\n\n";
		break;
	case 2:
		cout << "\n\n ___WEDNESDAY___\n\n";
		break;
	case 3:
		cout << "\n\n ___THURSDAY___\n\n";
		break;
	case 4:
		cout << "\n\n ___FRIDAY___\n\n";
		break;
	}
}

Voting::~Voting(void) {}
