/* These programs are written on top of a automatic template */

#include <iostream>
int main(){

	int x = 12, y = 22;
	int &b = x;
	b = 13;
	std::cout<<"x = "<<x;
	b = y;
	std::cout<<"x = "<<x;
	const int &c = x; //const reference.
	c = 102; // will throw compilation error.
	std::cout<<"x = "<<x;
	
	return 0;
}

