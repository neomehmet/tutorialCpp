#ifndef sports_h
#define sports_h
#include <iostream>

using namespace std;

class Basket{
	private:
		int cal;
	public:
		int get();
		Basket();
		Basket(const Basket& b);
		Basket& operator = ( const Basket& b);
		void set();
		friend ostream& operator << (ostream& out, Basket& b);
		friend istream& operator >> (istream& in, Basket& b);
		Basket& operator + (Basket& b);
};
class Football{
	private:
		int cal;
	public:
		int get();
		Football();
		Football(const Football& f);
		Football& operator = ( const Football& f);
		void set();
		friend ostream& operator << (ostream& out, Football& f);
		friend istream& operator >> (istream& in, Football& f);
		Football& operator + (Football& f);
};
class Tennis{
	private:
		int cal;
	public:
		int get();
		Tennis();
		Tennis(const Tennis& t);
		Tennis& operator = ( const Tennis& t);
		void set();
		friend ostream& operator << (ostream& out, Tennis& t);
		friend istream& operator  >>(istream& in, Tennis& t);
		Tennis& operator + (Tennis& t);
};

class Swim{
	private:
		int cal;
	
	public:

		int get();
		Swim();
		Swim(const  Swim& );
		void set();
		Swim& operator = (const Swim& );
		friend ostream& operator <<(ostream& out, Swim& s);
		friend istream& operator >>(istream& in, Swim& s);
		Swim& operator + (Swim& s);
};

#endif