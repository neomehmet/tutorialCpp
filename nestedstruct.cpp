#include <iostream>

using namespace std;
// C++ with Object orianted programming
// structures

struct Location
{
	string city;
	string country;
};

struct Person
{
	string name;
	int age;
	double length;
	struct Location loc;

};
int main()
{
	Person first, second ;
	first.name = "jesus christ" ;
	first.age = 2022 ;
	first.length = 1.85 ;
	first.loc.city = "Palestine" ;
	first.loc.country = "Syria " ;

	cout << " name " <<  first.name  << ", age " << first.age << endl;
	cout << " lives in city " << first.loc.city << ", " << first.loc.country << endl ;
	


	return 0;
}
