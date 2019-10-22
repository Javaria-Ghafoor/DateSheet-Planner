#include "Header.h"
#include <iostream>
#include <Windows.h>         //Sleep(time in mili sec) used

using namespace std;

Counting::Counting(void) {}

void Counting::counting(void)
{
	makecopy();
	cout << "\n Counting Votes";
	for (int i = 1; i <= 4; i++)
	{
		Sleep(500);
		cout << ".";
	}
	for (int k = 0; k < 5; k++)        //sem 1
	{
		static int ct[7];                     // ct == counter
		ct[7] = { 0 };
		for (int a = 0; a < 10; a++)
		{
			int V = copy[k][0][0][a];          // Day k, 1 paper/1st paper, sem 1, person a of sem 1
			switch (V)
			{
			case 0:
				break;
			case 1:
				++ct[0];
				break;
			case 2:
				++ct[1];
				break;
			case 3:
				++ct[2];
				break;
			case 4:
				++ct[3];
				break;
			case 5:
				++ct[4];
				break;
			case 6:
				++ct[5];
				break;
			case 7:
				++ct[6];
				break;
			}
		}
		int sample[7];
		for (int i = 0; i < 7; i++)                    //make copy of data
			sample[i] = ct[i];
		for (int i = 0; i < 6; i++)
		{
			if (ct[i] > ct[i + 1])
				ct[i + 1] = ct[i];                     //dn care for the loss of data here
		}                                              // ct[6] is now equal to max vote
		for (int i = 0; i < 7; i++)
			if (sample[i] == ct[6])
			{
				arrangement[k][0][0] = (i + 1);
				for (int a = 0; a < 10; a++)
					for (int k = 0; k < 5; k++)
						for (int s = 0; s <= 1; s++)
							if (votingdata[k][s][0][a] == (i + 1))
								copy[k][s][0][a] = 0;
				break;
			}
	}
	for (int k = 0; k < 5; k++)
	{
		if (k == 0 || k == 3)
			count1(k);
	}
	count(2);
	count(3);
	count(4);
	count(5);
	count(6);
	count(7);
	count(8);
}

void Counting::count1(int day)
{
	int ct[7] = { 0 };                     // ct == counter
	for (int l = 0; l < 10; l++)
	{
		int V = copy[day][1][0][l];
		switch (V)
		{
		case 0:
			break;
		case 1:
			++ct[0];
			break;
		case 2:
			++ct[1];
			break;
		case 3:
			++ct[2];
			break;
		case 4:
			++ct[3];
			break;
		case 5:
			++ct[4];
			break;
		case 6:
			++ct[5];
			break;
		case 7:
			++ct[6];
			break;
		}
	}
	int sample[7];
	for (int i = 0; i < 7; i++)                    //make copy of data
		sample[i] = ct[i];
	for (int i = 0; i < 6; i++)
	{
		if (ct[i] > ct[i + 1])
			ct[i + 1] = ct[i];                     //dn care for the loss of data here
	}                                              // ct[6] is now max
	for (int i = 0; i < 7; i++)
		if (sample[i] == ct[6])
			arrangement[day][1][0] = (i + 1);
}

void Counting::count(int sem)
{
	for (int k = 0; k < 5; k++)
	{
		int ct[5] = { 0 };
		for (int l = 0; l < 10; l++)                  //10 is the limit of students who voted per sem
		{
			int V = copy[k][0][sem - 1][l];
			switch (V)
			{
			case 1:
				++ct[0];
				break;
			case 2:
				++ct[1];
				break;
			case 3:
				++ct[2];
				break;
			case 4:
				++ct[3];
				break;
			case 5:
				++ct[4];
				break;
			}
		}
		int sample[5];
		for (int i = 0; i < 5; i++)                    //make copy of data
			sample[i] = ct[i];
		for (int i = 0; i < 4; i++)
		{
			if (ct[i] > ct[i + 1])
				ct[i + 1] = ct[i];                     //dn care for the loss of data here
		}                                              // ct[4] is now max
		for (int i = 0; i < 5; i++)
		{
			if (sample[i] == ct[4])
			{
				arrangement[k][0][sem - 1] = (i + 1);
				for (int l = 0; l < 10; l++)
					for (int k = 0; k < 5; k++)
						if (votingdata[k][0][sem - 1][l] == (i + 1))
							copy[k][0][sem - 1][l] = 0;
				break;
			}
		}
	}
}

Counting::~Counting(void) {}
