/* These programs are written on top of a automatic template */

#include <iostream>
using namespace std;

class Date{

	public:
		int month;
		int day;
		int year;
	public:
		const int& getMonth(){
			return month;
		}

		int& getDay(){
			return day;
		}

		int& getYear(){
			return year;
		}

		void setMonth(int m){
			month = m;
		}

		void setDay(int d){
			day = d;
		}

		void setYear(int y){
			year = y;
		}
};

int main(){

	Date d;
	d.setMonth(8);
	d.setDay(14);
	d.setYear(1991);


	/* We will edit the local variables to see if the member variables may change*/
	int t_d = d.getDay();
	int t_m = d.getMonth();
	int t_y = d.getYear();
	cout<<t_d<<" "<<t_m<<" "<<t_y<<endl;

	t_d = 1;
	t_m = 1;
	t_y = 1992;

	cout<<d.getDay()<<" "<<d.getMonth()<<" "<<d.getYear()<<endl;
	/*No, it didnt work out*/


	/* We will change the member variables without set function*/	
	int &temp_d = d.getDay();
	const int &temp_m = d.getMonth();
	int &temp_y = d.getYear();
	cout<<temp_d<<" "<<temp_m<<" "<<temp_y<<endl;

	temp_d = 10;
	//temp_m = 11; //Alas! you cannot change member variable
	temp_y = 1994;

	cout<<d.getDay()<<" "<<d.getMonth()<<" "<<d.getYear()<<endl;
	/* Thats done. */

	return 0;
}

