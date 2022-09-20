#include <iostream>
#include <string>

using namespace std; 

// accessing data wwith get and set functions
// create a class with constructors;
// declaration an object
// capsulation the data
// friend output input streams overloading
class Human
{
	private:  
		string name; 
		string nation;
		int age; 
	public:
	//	Human(); //default ctor
		Human(string name = "no name args", string nat = "no nation args" , int age = 0001);  // default and args ctor in the same func
		//ctor with args
		Human(const Human& other); // copy ctor
		//assignment operator
		Human& operator = (const Human& other);

		string getName()const;  //getter function returns human obj
		string getNat(); //setter function set to obj's datas
		int getage();

		void set(string name, string nat, int age );
		void setName(string name);
		void setNat(string nat);
		void setage(int age);
		void displayhuman();
friend ostream &operator<<( ostream &output, const Human &H );
friend istream &operator>>( istream  &input, Human &H );
};


ostream &operator<<( ostream &output, const Human &H ) {  // input output overload with friend classes
	output << "name : " << H.name << " nation : " << H.nation  << " Birth :" << H.age;
	return output;            
}

istream &operator>>( istream  &input, Human &H ) { 
	input >> H.name >> H.nation >> H.age ; 
	return input;            
}
/*
Human::Human()
{
	cout << "\n no argument ctro \n" ;
	name = "NO Name";
	nation = "NO Nation";
	age = 0;
}*/
Human::Human(string name , string nat  , int age )
{
	cout << "\n ctor with arguments and default args \n" ;
	this->name = name;
	this->nation = nation;
	this->age = age;
}
Human& Human::operator = (const Human& other)
{
	this->name = name;
	this->nation = nation;
	this->age = age;
	return *this;
}
Human::Human(const Human& other)
{
	cout << "\n copy ctor \n";
	this->name = other.name;
	this->nation = other.nation;
	this->age = other.age;
}

string Human::getName()const // const for the value absolutely does not change
{ 
	return  this->name;
}
string Human::getNat()
{
	return  this->nation;
}
int Human::getage()
{
	return  this->age;
}

void Human::set(string name  , string nat  , int age )
{
	this->name = name;
	this->nation = nat;
	this->age = age;
}
void Human::setName(string name)
{
	this->name = name;
}
void Human::setNat(string nat)
{
	this->nation = nat;
}
void Human::setage(int age)
{
	this->age = age;
}
void Human::displayhuman()
{	
	cout << "\nname " << this->name << " nation and born in " << this->nation << "," << this->age <<endl;
}


int main()
{
	Human ape[5] = { {"michelangelo ","italian", 1475}, {"loe da vinci", "italian", 1452}} ; 
	cout << endl << endl;
	for ( int i = 0; i<5; i++){
		ape[i].displayhuman();
	}
	Human x(ape[0]);
	x.displayhuman();

	cout << " name after nat after age" << endl;
	cin >> x;
	cout << x;
	return 0;

}
