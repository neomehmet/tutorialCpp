#include "sports.h"

int Basket::get(){ return cal; }
Basket::Basket()
{
	cal = 6;
}
Basket::Basket(const Basket& b)
{
	cal = b.cal;
}
Basket& Basket::operator = ( const Basket& b)
{
	cal = b.cal;
	return *this;
}
void Basket::set()
{
	cout << "enter to set basket cal" << endl;
	cin >> cal;
	cout << "basket cal->"<<cal <<endl;
}
ostream& operator << (ostream& out, Basket& b)
{
	out <<"Basket cal/dk ->"<< b.cal << endl << endl;
	return out;
}
istream& operator >> (istream& in, Basket& b)
{
	cout << "enter to basket cal/dk"<<endl;
	cin >> b.cal;
	return in ;
}
Basket& Basket::operator + (Basket& b)
{
	cal = cal + b.cal;
	return *this;
}


int Football::get(){ return cal; }
Football::Football()
{
	cal = 5;
}
Football::Football(const Football& f)
{
	cal = f.cal;
}
Football& Football::operator = ( const Football& f)
{
	cal = f.cal;
	return *this;
}
void Football::set()
{
	cout << "enter to set football cal"<<endl;
	cin >> cal;
	cout << "Football cal->"<<cal<<endl;
}
ostream& operator << (ostream& out, Football& f)
{
	out << "Football cal/dk ->" << f.cal<<endl<<endl;
	return out;
}
istream& operator >> (istream& in, Football& f)
{
	cout << " enter to football cal/dk ->"<<endl;
	in >> f.cal;
	return in;
}
Football& Football::operator + (Football& f)
{
	cal = cal + f.cal;
	return *this;
}



int Tennis::get(){ return cal; }
Tennis::Tennis()
{
	cal = 5;
}
Tennis::Tennis(const Tennis& t)
{
	cal = t.cal;
}
Tennis& Tennis::operator = ( const Tennis& t)
{
	cal = t.cal;
	return *this;
}
void Tennis::set()
{
	cout << "enter to set tennis cal"<<endl;
	cin >> cal;
	cout << "tennis cal->" << cal<<endl;
}
ostream&  operator << (ostream& out, Tennis& t)
{
	out <<"Tennis Cal/dk ->" << t.cal <<endl<<endl;
	return out;
}
istream& operator >>(istream& in, Tennis& t)
{
	cout << "Enter to tennis cal/dk " << endl;
	in >> t.cal;
	return in;
}
Tennis& Tennis::operator + (Tennis& t)
{
	cal = cal + t.cal;
	return *this;
}



int Swim::get(){ return cal ; }

Swim::Swim()
{
	cal = 7;
}
Swim::Swim(const Swim& s)
{
	cal = s.cal;
}
Swim& Swim::operator = (const Swim& s)
{
	cal = s.cal;
	return *this;
}
void Swim::set()
{
	cout << "enter to set swim cal"<<endl;
	cin >> cal;
	cout << "swim cal->" <<cal<<endl;
}
ostream& operator <<(ostream& out, Swim& s)
{
	out << "Swim Cal/dk ->"<< s.cal <<endl<<endl;
	return out;
}
istream& operator >> (istream& in, Swim& s)
{
	cout << "Enter to swim cal/dk"<<endl;
	in >> s.cal;
	return in;
}
Swim& Swim::operator + (Swim& s)
{
	cal = cal + s.cal;
	return *this;
}