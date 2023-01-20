#include "user.h"

Day::Day()
{
	spent_cal = 0;
	taken_cal = 0;	
}

Day::Day(const Day& d)
{
	spent_cal = d.spent_cal;
	taken_cal = d.taken_cal;
}

Day& Day::operator = (const Day& d)
{
	if(this != &d )
	{
		spent_cal = d.spent_cal;
		taken_cal = d.taken_cal;
		return *this;
	}
	return *this;
}

void Day::set_spent(int cal){	spent_cal = cal;}


void Day::set_taken(int cal){	taken_cal = cal;}
void Day::set()
{
	int data;
	cout <<" enter to set spent cal" <<endl;
	cin >> data;
	spent_cal = data;
	cout << "enter to taken cal" <<endl;
	cin >> data;
	taken_cal = data;
}
int Day::get_spent(){ return spent_cal ;}
int Day::get_taken(){ return taken_cal ;}
ostream& operator << (ostream& out, Day& d)
{
	out << "spent cal -->" << d.spent_cal << endl << "taken cal-->" << d.taken_cal << endl;
	return out;
}
istream& operator >> (istream& in, Day& d)
{
	cout << "enter to spent cal "<<endl;
	in >> d.spent_cal;
	cout << "enter to taken cal" <<endl;
	in >> d.taken_cal;
	return in;
}
Day& Day::operator +(Day& d)
{
	spent_cal += d.spent_cal;
	taken_cal += d.taken_cal;
	return *this;
}


////////////
Date::Date()
{
	cout << " Date is Being Creating" << endl;
	week=0;
	year=0;
	cout << " Date Has Been Created"<<endl;
	for (int i=0; i<7; i++)
	{
		day[i].set_spent(0);
		day[i].set_taken(0);
	}
}

Date::Date(const Date& d)
{
	cout << " Date is Being copying" << endl;
	week=0;
	year=0;
	cout << " Date Has Been copied"<<endl;
	for ( int i = 0; i < 7; i++)
	{
		day[i] = d.day[i];
	}
}

Date& Date::operator = (const Date& d)
{
	if ( this != &d)
	{
		week = d.week;
		year = d.year;
		for ( int i = 0; i < 7; i++)
		{
			day[i] = d.day[i];
		}
	}
	return *this;
}

int Date::get_week(){ return week ;}
int Date::get_year(){ return year ;}
Day* Date::get_day(){ return day;}
ostream& operator << (ostream& out, Date& d)
{
	out << " week" << d.week << endl << " year " << d.year << endl;
	for ( int i=0; i<7; i++)
	{
		out << d.day[i] <<i+1<<". day"<<endl;
	}
	return out;
}

void Date::set()
{
	cout << "enter to set week" <<endl;
	cin >> week;
	cout << "enter to set year "<<endl;
	cin >> year;
	for (int i=0; i<7; i++)
	{	
		cout << "day" << i+1 ;
		day[i].set();
	}
}

void Date::setweek(int x){ week = x ;}
void Date::setyear(int x){ year = x; }

Date& Date::operator + (Date& u)
{
	week += u.get_week();
	year += u.get_year();
	for(int i=0; i<7; i++)
	{
		day[i] = day[i] + u.day[i];
	}
	return *this;
 }



///////////////
User::User()
{
	id = 0;
	age = 0;
	weight = 0 ;
	name = "noname";
	surname = "noname";
	date.setweek(0);
	date.setyear(0);
	for ( int i=0; i<7; i++)
	{	
		date.day[i].set_taken(0);
		date.day[i].set_spent(0);
	}

}

User::User(int _id, int _age, int _weight, string _name, string _surname)
{
	id = _id;
	age = _age;
	weight = _weight;
	name = _name;
	surname = _surname;
}

User::User(const User& u)
{
	id = u.id ;
	age = u.age ;
	weight = u.weight ;
	name = u.name ;
	surname = u.surname ;
	date = u.date;
/*	date.setweek(u.date.get_week());
	date.setyear(u.date.get_year());
	for ( int i=0; i<7; i++)
	{	
		date.day[i].set_taken(u.date.day[i].get_taken());
		date.day[i].set_spent(u.date.day[i].get_spent());
	}
*/
}

User& User::operator = ( const User& u)
{
	if ( this != &u )
	{	
		id = u.id ;
		age = u.age ;
		weight = u.weight ;
		name = u.name ;
		surname = u.surname ;
		date = u.date;
	}
	return *this ;
}

void User::set()
{
	cout << "enter to set id " << endl;
	cin >> id;
	cout << "enter to set age" <<endl;
	cin >> age;
	cout << "enter to set weight"<<endl;
	cin >> weight;
	cout << "enter to set name"<<endl;
	cin >> name;
	cout <<"enter to set surname"<<endl;
	cin >> surname;
	date.set();


}

User User::get()
{	
	User temp;
	temp = *this;
	return temp;
}

User& User::operator + (User& u)
{
	id += u.id;
	age += u.age;
	weight += u.weight;
	name.append(u.name);
	surname.append(u.surname);
	date = date+u.date;
	return *this;
}

ostream& operator << (ostream& out, User& u)
{
	out <<"id ->" << u.id << endl <<"age ->" << u.age << endl <<"weight ->" << u.weight << endl 
	<<" name surname ->"<< u.name << u.surname << endl << "date "<<u.date << endl 
	<< "breakfast " << u.breakf << endl << "lunch" <<u.lunch
	<< " dinner " << u.dinner <<endl;

	return out;
}

void User::create()
{
	int data;
	cout << "enter to set id " << endl;
	cin >> id;
	cout << "enter to set age" <<endl;
	cin >> age;
	cout << "enter to set weight"<<endl;
	cin >> weight;
	cout << "enter to set name"<<endl;
	cin >> name;
	cout <<"enter to set surname"<<endl;
	cin >> surname;
	cout << "enter to set week" << endl;
	cin >> data;
	date.setweek(data);
	cout << "enter to set year" << endl;
	cin >> data;
	date.setyear(data);

}

void User::dosport(int sport, int time, int daynum)
{
	if (sport == 1)
		date.day[daynum].set_spent(basket.get()*time);
	else if( sport == 2)
		date.day[daynum].set_spent(football.get()*time);
	else if(sport == 3)
		date.day[daynum].set_spent(tennis.get()*time);
	else if( sport == 4)
		date.day[daynum].set_spent(swim.get()*time);
	else
		cout << "yanlis giris"<<endl;

}
void User::eatfood(int meal, int portion, int daynum)
{
	if(meal == 1){
		if(portion == 1)
			date.day[daynum].set_taken(breakf.getsmall());
		else if(portion == 2)
			date.day[daynum].set_taken(breakf.getmed());
		else if(portion == 3)
			date.day[daynum].set_taken(breakf.getlarge() );

	}
	else if(meal == 2)
	{	
		if(portion == 1)
			date.day[daynum].set_taken(lunch.getsmall());
		else if(portion == 2)
			date.day[daynum].set_taken(lunch.getmed());
		else if(portion == 3)
			date.day[daynum].set_taken(lunch.getlarge() );
	}
	else if(meal == 3)
	{	
		if(portion == 1)
			date.day[daynum].set_taken(dinner.getsmall());
		else if(portion == 2)
			date.day[daynum].set_taken(dinner.getmed());
		else if(portion == 3)
			date.day[daynum].set_taken(dinner.getlarge() );
	}
	cout << " ogun girildi "<<endl;
}