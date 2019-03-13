/* These programs are written on top of a automatic template */

#include <iostream>
using namespace std;
int main(){

	string names[] = {"Alex", "Betty", "Caroline", "Dave", "Emily", "Fred", "Greg", "Holly"}, name;
	bool avail = false;
	cout<<"Enter the name:"<<endl;
	cin>>name;
	for(string temp : names){
		if(name == temp){
			avail = true;
			break;
		}
	}

	if(avail == true)
		cout<<name<<" was found"<<endl;
	else
		cout<<name<<" was not found"<<endl;
	return 0;
}

