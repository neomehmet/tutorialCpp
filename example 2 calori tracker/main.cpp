#include "user.h"



using namespace std;

int totalcal(User& u);

int main(){
	User user;
	User testuser;
	User testuser2;

	Breakf	testbreakf;
	Lunch	testlunch;
	Dinner	testdinner;
	
	Tennis	testtennis;
	Basket	testbasket;
	Football testfootball;
	Swim	testswim;

	int userexist = 0, breaknum =0, lunchnum=0, dinnernum=0, 
		sporttime=0,footballnum=0, basketnum=0, tennisnum=0, swimnum=0;
	int daynum = 0, mod =1, status =1;
	int testcal, portion, choise;

	while(status)
		{
		cout << "enter '1'to use user mode or '2' to devoloper mode  ***'9' to exit from program"<< endl;
		cin >> choise;
		if ( choise == 1)
			{	
				mod = 1;
				while(mod == 1 && daynum<=6) 
				{
					choise = 0;
					cout << "Kullanici olusturmak icin 1" <<endl 
					<< "Spor icin 2"<<endl << "Yemek icin 3" <<endl 
					<< "Bilgileri yazdirmak icin 4"<< endl
					<<"Gun sonu icin 5"<<endl
					<< "Cikmak icin 6 giriniz"<<endl;
					cin >> choise;
					if(choise == 1 && userexist == 0)
					{	
						user.create( );
						userexist =1 ;
						cout << "*****kullanci olusturuldu*****"<<endl<<endl;
					}
					else if( choise == 1 && userexist == 1)
							cout << "kullanci daha once olusturuldu"<<endl;
					else if(choise==2 && userexist ==1 && daynum <=7)
					{
						choise = 0;
						sporttime =0;
						cout << "Basket icin 1" << endl
							 << "Football icin 2"<< endl
							 << "Tennis icin 3"<< endl
							 << "Swim icin 4 giriniz"<< endl ;
						cin >> choise;
						cout << "Kac dk spor yapildi" <<endl;
						cin >> sporttime;

						user.dosport(choise,sporttime,daynum);

						if(choise ==1)
							basketnum++;
						else if(choise==2)
							footballnum++;
						else if(choise==3)
							tennisnum++;
						else if (choise==4)
							swimnum++;
						else 
							cout <<" yanlis giris" << endl;

					}
					else if( choise ==3 && userexist == 1 && daynum <=7)
					{	
						choise = 0;
						portion = 0;
						cout << "Kahvalti icin 1" <<endl <<"ogle icin 2"<<endl <<" aksam yemegi icin 3 giriniz"<<endl;
						cin >>choise;
						cout << " small porsiyon 1,  medium porsiyon 2, large porsiyon icin 3 giriniz"<<endl ;
						cin >>portion;
						user.eatfood(choise,portion,daynum);
						if(choise == 1)
							breaknum++;
						else if(choise == 2)
							lunchnum++;
						else if(choise == 3)
							dinnernum++;
					}
					else if ( choise==4)
					{
						cout << "Bilgiler yaziliyor "<<endl;
						cout << user << endl<< " total calori-> "<< totalcal(user) << endl;
						cout << " football sayisi " << footballnum << endl 
							<< "Basketball sayisi "<< basketnum << endl
							<< "Tennis sayisi " << tennisnum << endl
							<< "Swim Sayisi "<< swimnum << endl
							<< " breakfast sayisi " << breaknum << endl
							<< " Lunch sayisi" << lunchnum << endl
							<< " Dinner sayiis "<< dinnernum << endl;

					}
					else if( choise == 5)
					{
						cout<< daynum +1<<" .gun sonu " <<endl;
						daynum++;
					}
					else if( choise == 6)
						mod =0;

				}

			}
		else if ( choise == 2)
			{
			choise = 0;
			cout << " enter 1 to test meals.h " <<endl <<" enter 2 to test sports.h" <<endl <<" enter 3 to test user.h "<< endl ;
			cin >> choise;
			if(choise == 1)
				{
				cout << testbreakf << testlunch << testdinner ; 
				cout <<endl<< "meals.h set fonksiyonu testi" << endl;
				testbreakf.set();
				testlunch.set();
				testdinner.set();
				cout << testbreakf << testlunch << testdinner ; 
				
				cout << endl << "meals.h + operator testi"<<endl;
				testbreakf = testbreakf + testbreakf;
				testlunch  = testlunch + testlunch ;
				testdinner = testdinner + testdinner;
				cout << testbreakf << testlunch << testdinner ; 

				cout << "meals.h get fonksiyonu testi" << endl;				
				testcal = testbreakf.getsmall();
				cout << "Breakfast getsmall testi -> " << testcal << endl;
				
				testcal = testbreakf.getmed();
				cout << "Breakfast getmed testi ->" << testcal << endl;
				
				testcal = testbreakf.getlarge();
				cout << "Breakfast getlarge testi ->" << testcal <<endl;
				
				testcal = testlunch.getsmall() ;
				cout << "Lunch getsmal testi->" <<testcal << endl;
				
				testcal = testlunch.getmed();
				cout << "Lunch getmed testi ->" << testcal << endl;
				
				testcal = testlunch.getlarge();
				cout << "Lunch getlarge testi ->" << testcal << endl;
				
				testcal = testdinner.getsmall();
				cout << "Dinner getsmall testi ->"<< testcal << endl;
				
				testcal = testdinner.getmed();
				cout << "Dinner getmed testi ->" << testcal <<endl;
				
				testcal = testdinner.getlarge();
				cout << "Dinner getlarge testi->" << testcal << endl;



				}
			else if( choise == 2)
				{

				testcal = testtennis.get();
				cout << "Tennis get fonksiyonu "<< testcal<<endl;
				testcal = testfootball.get();
				cout << "Football get fonksiyonu "<< testcal<<endl;
				testcal = testswim.get();
				cout << "Swim get fonksiyonu "<< testcal<<endl;
				testcal = testbasket.get();
				cout << "Basket get fonksiyonu "<< testcal <<endl;


				cout << " sports.h sinifi << operator "<<endl;
				cout << testtennis << testbasket << testfootball << testswim ;

				cout <<endl<< endl << " set fonksiyonu testi" <<endl;
				testswim.set();
				testfootball.set();
				testbasket.set();
				testtennis.set();

				cout <<endl<<endl << "+ operator overload testing"<<endl;
				testtennis= testtennis + testtennis;
				testbasket= testbasket + testbasket;
				testfootball= testfootball + testfootball;
				testswim = testswim + testswim;
				cout << testtennis << testbasket << testfootball << testswim ;
				}
			else if( choise == 3)
				{
					cout << "user.h set fonksiyonu testi" <<endl;
					testuser.set();
					cout <<  testuser << endl;
					
					cout <<"user.h get fonksiyonu ve << operator testi" << endl;
					testuser2 = testuser.get();
					cout << testuser <<endl << testuser2 <<endl;

					cout << "user.h + operator testi "<<endl;
					testuser = testuser + testuser ;
					cout << testuser << endl ;
				}
			
			}
		else if( choise == 9)
			status = 0;
		}
	

	return 0;
}


int totalcal(User& u)
{	
	int sum=0;
	for(int i=0; i<7; i++)
	{
		sum = u.date.day[i].get_taken() - u.date.day[i].get_spent();
		cout <<i+1<<". gun "<<endl<< "alinan cal ->"<<  u.date.day[i].get_taken()  << endl << "verilen cal ->"<< u.date.day[i].get_spent() << endl<<endl;

	}
	return sum;
}