/* These programs are written on top of a automatic template */

#include <iostream>
int readNumber(void);
void writeAnswer(int);

int main(){

	writeAnswer(readNumber() + readNumber());	
	return 0;
}

void writeAnswer(int s){
	std::cout<<"Sum is :"<<s<<std::endl;
}

int readNumber(void){
	int i;
	std::cout<<"Enter  number:"<<std::endl;
	std::cin>>i;

	return i;
}
void writeAnswer(int);

