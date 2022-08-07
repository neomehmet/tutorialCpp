#include <iostream>
#include <string>

using namespace std; 

// accessing data wwith get and set functions
// create a class with constructors;
// declaration an object
// capsulation the data

class Human
{
	private:  
		string name; 
		string nation;
		int year; 
	public:
		Human(); //default ctor
		Human(string namex, string natx, int yearx); 
		//ctor with args
		Human(const Human& other); // copy ctor
		//assignment operator
		Human& operator = (const Human& other);

		string getName();  //getter function returns human obj
		string getNat(); //setter function set to obj's datas
		int getYear();

		void set(string name, string nat, int year );
		void setName(string name);
		void setNat(string nat);
		void setYear(int year);

		void displayhuman();

};

Human::Human()
{
	name = "NO Name";
	nation = "NO Nation";
	year = 0;
}
Human::Human(string name, string nation, int year)
{
	this->name = name;
	this->nation = nation;
	this->year = year;
}
Human& Human::operator = (const Human& other)
{
	this->name = name;
	this->nation = nation;
	this->year = year;
	return *this;
}

string Human::getName()
{ 
	return  this->name;
}
string Human::getNat()
{
	return  this->nation;
}
int Human::getYear()
{
	return  this->year;
}

void Human::set(string name, string nat, int year)
{
	this->name = name;
	this->nation = nat;
	this->year = year;
}
void Human::setName(string name)
{
	this->name = name;
}
void Human::setNat(string nat)
{
	this->nation = nat;
}
void Human::setYear(int year)
{
	this->year = year;
}
void Human::displayhuman()
{
	cout << "name " << this->name << endl;
	cout << "nation and born in " << this->nation << "," << this->year <<endl;
}

int main()
{
	Human cesar("Gaius Julius Caesar","ROME",-100);
	Human alexander = Human("alexander the great","macedon", -320);
	Human Hanninal;  // autonomated call default ctor
	cesar.displayhuman();
	alexander.displayhuman();
	Hanninal.displayhuman();

	cesar.setNat("GERMAN");
	cesar.displayhuman();
	int birth_date = alexander.getYear();
	cout << endl << " try for get function" << birth_date << endl;

}
