#include "meals.h"

Breakf::Breakf()
{
	small = 400;
	med = 600 ; 
	large = 800;
}
Breakf::Breakf( const Breakf& food)
{
	small = food.small;
	med = food.med;
	large = food.large;
}
Breakf& Breakf::operator = ( const Breakf& food	)
{
	small = food.small;
	med = food.med;
	large = food.large;
	return *this;
}

void Breakf::set()
{
	cout << " enter to breakfast small portion cal " <<endl;
	cin >> small;
	cout << " enter to breakfast medium portion cal " <<endl;
	cin >> med;
	cout << " enter to breakfast large portion cal " <<endl;
	cin >> large;
	cout <<endl << "large->"<<large << endl << "medium->" << med<< endl << "small->" << small<<endl;
}
ostream& operator << ( ostream& out, Breakf& food)
{
	out << "Small Portion Breakfast  Cal->" << food.small << endl<< "Medium Portion	Breakfast  Cal ->" << food.med << endl << 
	"Large Portion Breakfast  Cal->"<< food.large
	<<endl<<endl;
	return out;
}
istream& operator >>(istream& in, Breakf& food)
{
	cout << "Enter to small Breakfast cal"<<endl;
	in >> food.small;
	cout << "Enter to medium breakfast cal"<<endl;
	in >> food.med;
	cout << "enter to large breakfast cal"<<endl;
	in >> food.large;
	return in;
	
}
Breakf& Breakf::operator +(Breakf& food)
{
	small += food.small;
	med += food.med;
	large += food.large;
	return *this;
}
int Breakf::getsmall(){ return small ; }
int Breakf::getmed(){ return med ; }
int Breakf::getlarge(){ return large ;}


///////////////////////////
Lunch::Lunch()
{
	small = 400;
	med = 600 ; 
	large = 800;
}
Lunch::Lunch( const Lunch& food)
{
	small = food.small;
	med = food.med;
	large = food.large;
}
Lunch& Lunch::operator = ( const Lunch& food)
{
	small = food.small;
	med = food.med;
	large = food.large;
	return *this;
}

void Lunch::set()
{
	cout << "enter to lunch small portion cal" << endl;
	cin >> small;
	cout << "enter to lunch small portion cal" << endl;
	cin >> med;
	cout << "enter to lunch small portion cal" << endl;
	cin >> large;
	cout <<endl<< "large->"<<large << endl << "medium->" << med<< endl << "small->" << small<<endl;
}
ostream& operator << ( ostream& out, Lunch& food)
{
	out << "small Lunch Meal Cal->" << food.small << endl << "medium Lunch Meal Cal ->" << food.med << endl << "large Lunch Meal Cal->"<< food.large<<endl<<endl;
	return out;
}
istream& operator >> ( istream& in, Lunch& food)
{	
	cout << " enter to small portion cal"<<endl;
	in >> food.small;
	cout <<" enter to medium portion cal"<<endl;
	in >> food.med;
	cout << " enter to large portion cal"<<endl;
	in >> food.large;
	return in;
}
Lunch& Lunch::operator + (Lunch& food)
{
	small += food.small;
	med += food.med;
	large += food.large;
	return *this;
}
int Lunch::getsmall(){ return small ; }
int Lunch::getmed(){ return med ; }
int Lunch::getlarge(){ return large ;}

//////////////////
Dinner::Dinner()
{
	small = 400;
	med = 600 ; 
	large = 800;
}
Dinner::Dinner( const Dinner& food)
{
	small = food.small;
	med = food.med;
	large = food.large;
}
Dinner& Dinner::operator = ( const Dinner& food)
{
	small = food.small;
	med = food.med;
	large = food.large;
	return *this;
}


void Dinner::set()
{
	cout << "enter to dinner small portion cal" << endl;
	cin >> small;
	cout << "enter to dinner small portion cal" << endl;
	cin >> med;
	cout << "enter to dinner small portion cal" << endl;
	cin >> large;
	cout <<endl<< "large->"<<large << endl << "medium->" << med<< endl << "small->" << small<<endl;

}
ostream& operator << ( ostream& out, Dinner& food)
{
	out << "small portion dinner cal ->" << food.small << endl << "medium portion Dinner cal->" << food.med << endl << "large portion Dinner cal->"<< food.large<<endl<<endl;
	return out;
}
istream&  operator >>(istream& in, Dinner& food)
{
	cout << " enter to small portion cal"<<endl;
	in >> food.small;
	cout <<" enter to medium portion cal"<<endl;
	in >> food.med;
	cout << " enter to large portion cal"<<endl;
	in >> food.large;
	return in;
}
Dinner& Dinner::operator +(Dinner& food)
{
	small += food.small;
	med += food.med;
	large += food.large;
	return *this;
}
int Dinner::getsmall(){ return small ; }
int Dinner::getmed(){ return med ; }
int Dinner::getlarge(){ return large ;}