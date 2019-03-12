/* These programs are written on top of a automatic template */

#include <iostream>
#include <string>
using namespace std;
int main(){
	string str_f, str_l, str_full;
	int age;

	cout<<"Enter your first name:";
	getline(cin, str_f);

	cout<<"Enter your last name:";
	getline(cin, str_l);

	str_full = str_f + str_l;
	
	cout<<"Enter your age:";
	cin>>age;
	
	cout<<"You've live "<< static_cast<double> (age)/str_full.length()<<" for each letter in your name"<<endl;
	return 0;
}

