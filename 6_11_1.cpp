/* These programs are written on top of a automatic template */

#include <iostream>
int main(){

	int a = 12;
	std::cout<<"Value of a:"<<a<<std::endl;
	int &b = a;
	b = 14;
	std::cout<<"Value of a:"<<a<<std::endl;
	b++;
	std::cout<<"Value of a:"<<a<<std::endl;
	int &c = b;
	c = 32;
	std::cout<<"Value of a:"<<a<<std::endl;
	int &d = c;
	d ++;
	std::cout<<"Value of a:"<<a<<std::endl;

	std::cout<<"size of d :"<<sizeof(d)<<std::endl;	
	std::cout<<"size of a :"<<sizeof(a)<<std::endl;	

	std::cout<<"adress of a:"<<&a<<std::endl;
	std::cout<<"adress of d:"<<&d<<std::endl;

	return 0;
}

