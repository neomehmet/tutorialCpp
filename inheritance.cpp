#include <iostream>
#include <string>
using namespace std; 
//*******************************//
// friend output input streams overloading
//inheritance class A : public B {}   A is inherited from B. 
//multiple inheritance 
//function overriding  between display() functions !! not overload !!
// scope operator (line 16.)
// return an obj ( function define line 21.)
// obj array and assignment 
class Human{
public :
		string name; 
		string nation;
		int age; 
		Human(string name = "no name args", string nat = "no nation args" , int age = 0001) : name(name), nation(nat), age(age) {} ;  // default and args ctor in the same func//ctor with args
		Human(const Human& other); // copy ctor
		Human& operator = (const Human& other);		//assignment operator

		string getName()const;  //getter function returns human obj
		Human& getHuman();


		void display();
friend ostream &operator<<( ostream &output, const Human &H );
friend istream &operator>>( istream  &input, Human &H );
};

class citizen{
	public : 
		int citizenNumb;
		string country;

};
class Cop : public Human, public citizen{
	public :
		int rank;
		float salary;

	void display(); // function overRiding 
};

ostream &operator<<( ostream &output, const Human &H ) {  // input output overload with friend classes
	output << "name : " << H.name << " nation : " << H.nation  << " Birth :" << H.age;
	return output;            
}
istream &operator>>( istream  &input, Human &H ) { 
	input >> H.name >> H.nation >> H.age ; 
	return input;            
}

int main()
{
	Human ape[5] = { {"michelangelo ","italian", 1475}, {"loe da vinci", "italian", 1452}} ; 
	cout << endl << endl;
	ape[0].display();
	ape[1].display();

	Cop pol1 ;
	pol1.nation = "turk";
	pol1.name = "Kemal";
	pol1.country = "Turkey";
	pol1.age = 242;
	pol1.citizenNumb = 01;
	pol1.rank = 5;
	pol1.salary = 18400;
	pol1.display();

	return 0;
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

void Human::display()
{	
	cout << "\nname " << this->name << " nation and born in " << this->nation << "," << this->age <<endl;
}

void Cop::display(){
	cout << name << "\t" << country  << "\t" << nation  << "\t" << endl;
	cout  << salary  << "\t" << age  << "\t" << citizenNumb  << "\t" ;
}
