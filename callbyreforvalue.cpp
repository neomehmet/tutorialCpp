#include <iostream>
using namespace std;
// C++ with Object orianted programming
// structures and  fonctions


struct Person
{
	string name;
	int age;
	double length;
};

void DisplayWithValue(Person x)
{	// call by value
	cout <<" Function with the data's copy and data is -->>" << x.age << "  " << x.name << endl; 
	x.name = "Paris";
};

void DisplayWithRefferance(Person *x)
{ // call by refferance
	cout << "Function with x possess data" << x->age << " " << x->name << endl;
	// if the data's x change in this function, it changes data's x
	x->age = 1;
	x->name = "new name" ;
	cout << " new data in the x is " << x->name << " " << x->age << endl;

};
int main()
{
	Person first;
	first.name = "jesus christ" ;
	first.age = 2022 ;
	first.length = 1.85 ;

	Person second = { "Solomono", 3000, 195};
	
	DisplayWithValue(first);
	// before send, the data copied then response to calling
	cout << endl << " Does the data has changed, check and -->> " << first.name << endl; 
	DisplayWithRefferance(&first);
	cout << endl << "Does the data has changed  -->>" << first.age  << "  if the age changed this is the difference ;)  and name =" << first.name << endl;
	return 0;
}
