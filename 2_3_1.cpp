/* These programs are written on top of a automatic template */

#include <iostream>

int getValueFromUser(int i){

	int n;

	std::cout<<"Enter a number "<<i<<":";
	std::cin>>n;

	return n;

}

void getSum(int i, int j){
	std::cout<<"The sum is "<<i + j<<std::endl;
}
int main(){

	int num1 {getValueFromUser(1)};
	int num2 {getValueFromUser(2)};
	getSum(num1, num2);
	return 0;
}

