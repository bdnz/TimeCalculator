#include<iostream>
#include<conio.h>


using namespace std;

struct time{int hours; int minutes; int seconds;};

void main(void)
{
	
	time firstTime, secondTime, resultTime; 
	char c; 
	long store;
	
	do{

	cout<<"\nEnter the first time (HH:MM:SS): ";
	cin >>firstTime.hours>>c>>firstTime.minutes>>c>>firstTime.seconds;

	cout<<"Enter the second time (HH:MM:SS): ";
	cin >>secondTime.hours>>c>>secondTime.minutes>>c>>secondTime.seconds;

	store=firstTime.hours*3600+firstTime.minutes*60+firstTime.seconds+
		secondTime.hours*3600+secondTime.minutes*60+secondTime.seconds;

	cout<< "\nFirst Time: "<< firstTime.hours*3600+firstTime.minutes*60+firstTime.seconds << " seconds" << endl;
	cout  << "\nSecond time: " << secondTime.hours*3600+secondTime.minutes*60+secondTime.seconds <<" seconds" << endl;
	cout << "\nSum of those 2 inputs: " << store << " seconds" <<  endl;


	resultTime.seconds=store%60; resultTime.minutes=((store-resultTime.seconds)%3600)/60;

	resultTime.hours=store/3600;
	
	if(resultTime.seconds>59)
	{resultTime.seconds-=59; resultTime.minutes++;}

	if(resultTime.minutes>59) 
	{resultTime.minutes-=59; resultTime.hours++;}
	

	cout<<"\nThe final resiult is (HH:MM:SS): "<<resultTime.hours<<":"<<resultTime.minutes<<":"<<resultTime.seconds;
	cout << " \n";
	cout<<"Do you want to run the program again? (y/n) ?: "<<endl;

	}
	while(getch()=='y');

	if (getch() == 'n')
	{exit (EXIT_FAILURE);}
}