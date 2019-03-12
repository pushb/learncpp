/* These programs are written on top of a automatic template */

#include <iostream>
int sum(); //Will throw a compilation error. Coz in cpp it cannot accept without parameters we have polymorphism
int main(){

	std::cout<<"Sum is "<<sum(2, 15)<<std::endl;
	return 0;
}
int sum (int  i, int j){
	return i + j;
}
