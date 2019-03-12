/* These programs are written on top of a automatic template */

#include <iostream>
int num;
int num(){
	return 12;
}
int main(){
	num = num();

	std::cout<<num<<std::endl;
	return 0;
}

