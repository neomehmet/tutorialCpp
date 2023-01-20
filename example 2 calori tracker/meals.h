#ifndef meals_h
#define meals_h
#include <iostream>

using namespace std;

class Breakf{
	private :
	 int small;
	 int med ;
	 int large ; 
	public:
	 	Breakf();
		Breakf( const Breakf& food);
		Breakf& operator = ( const Breakf& food);

		void set();
		friend ostream& operator<< ( ostream& out, Breakf& food);
		friend istream& operator >>(istream& in, Breakf& food);
		Breakf& operator +(Breakf& food);
		int getsmall();
		int getmed();
		int getlarge();
};

class Lunch{
	private:
		int small ;
		int med  ; 
		int large ;
	public:
		Lunch();
		Lunch( const Lunch& food);
		Lunch& operator = ( const Lunch& food);

		void set();
		friend ostream& operator << ( ostream& out, Lunch& food);
		friend istream& operator >> ( istream& in, Lunch& food);
		Lunch& operator + (Lunch& food);
		int getsmall();
		int getmed();
		int getlarge();
};

class Dinner{
	private:
		int small ;
		int med  ; 
		int large ;
	public:
		Dinner();
		Dinner( const Dinner& food);
		Dinner& operator = ( const Dinner& food);
		
		void set();
		friend ostream& operator << ( ostream& out, Dinner& food);
		friend istream& operator >>(istream& in, Dinner& food);
		Dinner& operator +(Dinner& food);
		int getsmall();
		int getmed();
		int getlarge();
};


#endif