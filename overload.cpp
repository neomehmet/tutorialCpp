#include <iostream>
#include <string>
using namespace std;
// overloading a function


void display( int a);

void display(string b);

void display(float c);


int main()
{
	int a=1;
	string b="bla bla bla";
	float c=5.555;
	display(a);
	display(b);
	display(c);


	return 0;
}

void display(int a)
{
	cout << "argument is interger  " << a << endl;
	return ;
}

void display(string b)
{
	cout << "argument is string   " << b << endl;
	return ;
}

void display(float c)
{
	cout << "argument is float   " << c << endl;
	return ;
}