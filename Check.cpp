#include "Header.h"
#include <iostream>

using namespace std;

Java::Java() {}

int Java::Check(int i, int a) // 'i' is user input, 'a' is check int which user can never input
{
	try
	{
		float k;     //input stored in 'k'
		cin >> k;
		i = (int)k;     //input copied to 'i' (type cast to int)
		if (!cin || i != k) throw 1;
		/*(!cin) will return 0 when cin is carried out successfully i.e. no char is inputted.
		BUT if decimal input is given, (!cin) will still return 0. Thus, i!=k checks for 'k'
		(input) to be an integer and not a decimal value.*/
		else if (cin.get() == '\n') throw 'a';
		/*if 'k' is inputted as
		1. 34 (an integer)
		2. 34.5 (a float) ~ already negated
		cin.get() == '\n' returns 1
		else if 'k' is inputted as
		1. 34...
		2. 34&%>#@DFW
		3. 34.4t     (etc)
		cin.get() == '\n' returns 0
		thus, this condition is true for a correct input.*/
		else throw (cin.get());
		/*Since for an integer following other characters, cin.get() != '\n', thus for such
		a wrong input, throw cin.get() which is in actual returing 0 here. (0 is an int)*/
	}
	catch (int)     //catch or follow up the code when an int is thrown
	{
		block();
		return a;
		/*input 'i' is made equal to check variable 'a' to allow while loop to continue and
		thus allow user to re-enter input. (refer to main.cpp template function)*/
	}
	catch (char)    //catch or follow up the code when a char is thrown
	{
		return i;
		/*correct input entered is returned BUT if input equals check int 'a' while loop will
		continue (refer to main.cpp template function) which is the limitation of this function.*/
	}
}

float Java::Check(float f, float b)
{
	try
	{
		cin >> f;
		if (!cin) throw 1;    // if char
		else if (cin.get() == '\n') throw 'a';    //else if not char (float is followed by '\n'
		else throw (cin.get());    //else (if float is followed by string, e.g. 3.14tr&7)
	}
	catch (int)
	{
		block();
		return b;
	}
	catch (char)
	{
		return f;
	}
}

char Java::Check(char ch, char c)
{
	cin >> ch;
	try
	{
		if (cin.get() == '\n') throw 'a';     //if single char
		else if (cin.get()) throw 1;     //else (if char is followed by string, e.g. augdyhg)
	}
	catch (int)
	{
		block();
		return c;
	}
	catch (char)
	{
		return ch;
	}
}

void Java::block(void)
{
	cout << "\n Something went wrong.\n";
	cin.clear();
	cin.ignore(cin.rdbuf()->in_avail(), '\n');
	//ignore the available number of characters in the read buffer until newline character
	cout << " Re-enter response: ";
}

Java::~Java() {}
