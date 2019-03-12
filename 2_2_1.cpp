/* These programs are written on top of a automatic template */

#include <iostream>

int getValueFromUser(int i){

	int n;

	std::cout<<"Enter a number "<<i<<":";
	std::cin>>n;

	return n;

}
int main(){

	int num1 {getValueFromUser(1)};
	int num2 {getValueFromUser(2)};
	std::cout<<"Adding the numbers gives: "<< num1 + num2<<std::endl;
	return 0;
}

