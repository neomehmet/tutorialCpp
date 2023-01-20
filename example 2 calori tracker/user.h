#ifndef US_H
#define US_H

#include <iostream>
#include "meals.h"
#include "sports.h"
#include <string>

using namespace std;

class Day{
	
		int spent_cal;
		int taken_cal;	
	public: 
		Day();
		Day(const Day& d);
		Day& operator = (const Day& d);
		void set_spent(int _cal);
		void set_taken(int _cal);
		int get_spent();
		int get_taken();
		void set();
		friend ostream& operator << (ostream& out, Day& d);
		friend istream& operator >> (istream& in, Day& d);
		Day& operator +(Day& );

};

class Date
{
	private:
		int week;
		int year;

	public:
		Day day[7];
		Date();
		Date(const Date& );
		Date& operator = (const Date& );
		Date& operator + (Date& );
		int get_week();
		int get_year();
		Day* get_day();
		void set();
		void setweek(int );
		void setyear(int );
		friend ostream& operator << (ostream& out, Date& d);
};

class User{
	private:
		int id;
		int age;
		int weight;
		string name;
		string surname;

	public : 
		Date date;
		Breakf breakf;
		Lunch lunch;
		Dinner dinner;
		Football football;
		Basket basket;
		Tennis tennis;
		Swim swim;

		User();
		User(int _id, int _age, int _weight, string _name, string _surname);
		User(const User& u);
		User& operator = ( const User& u);
		void set();
		User get();
		User& operator + (User& u);
		friend ostream& operator << (ostream& out, User& );
		void create();
		void eatfood(int, int, int );
		void dosport(int ,int,int);
};

#endif
