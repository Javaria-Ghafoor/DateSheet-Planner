#pragma once
#include <string>

using namespace std;

class Login
{
private:
	friend class Course_Managing;
	friend class Voting;
	void login(void);
	Login(void);
	~Login(void);
};

class Course_Managing
{
	friend class DateSheet;
protected:
	Login User;
	static int votingdata[5][2][8][10];
	static int copy[5][2][8][10];
	int sem;
	static int arrangement[5][2][8];
	virtual void voting(void) {};
	virtual void counting(void) {};
	virtual void planning(void) {};
	void makecopy(void);
	void sem1(void) const;
	void sem2(void) const;
	void sem3(void) const;
	void sem4(void) const;
	void sem5(void) const;
	void sem6(void) const;
	void sem7(void) const;
	void sem8(void) const;
	Course_Managing(void);
	~Course_Managing(void);
};

class Voting :public Course_Managing
{
private:
	friend class DateSheet;
	void voting(void);
	void vote(void);
	void block(int) const;                 // a repetitive block of code
	Voting(void);
	~Voting(void);
};

class Counting :public Course_Managing
{
private:
	friend class DateSheet;
	void counting(void);
	void count1(int);
	void count(int);
	Counting(void);
	~Counting(void);
};

class Arranging :public Course_Managing
{
private:
	friend class DateSheet;
	void planning(void);
	void displayCourseNo(int, int);
	void displayCourses(int);
	Arranging(void);
	~Arranging(void);
};

class DateSheet
{
private:
	Voting Voter;
	Counting Counter;
	Arranging Planner;
	string exam;
	void notice(void);
	void welcome(void);
public:
	DateSheet(void);
	~DateSheet(void);
};

/*All functions included in class Java (defined in Check.cpp)
have a pseudo-syntax as:
inputVariable = check(inputVariable, limitationInput);
limitation input is the input user is restricted not to enter
despite it matches the data type.*/

class Java
{
private:
	void block(void);
	int Check(int, int);
	float Check(float, float);
	char Check(char, char);
	Java();
	~Java();
public:
	template <typename A>
	friend A check(A a, A chk);
};
