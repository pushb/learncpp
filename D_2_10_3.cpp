/* These programs are written on top of a automatic template */

#include <iostream>
double getValue();
char  getOperator();
double calcValue(double , double , char );
int main(){

	double a{getValue()}, b{getValue()};
	char c{getOperator()};
	std::cout<<"Calculated value is : "<<calcValue(a, b, c)<<std::endl;	
	return 0;
}

char getOperator(){
	char ch;
	std::cout<<"Enter one of the following: +, -, *, or /:";
	std::cin>>ch;

	return ch;
}

double calcValue(double d1, double d2, char ch){
	if(ch == '+'){
		return d1 + d2;
	} else if(ch == '-'){
                return d1 - d2;
        } else if(ch == '*'){
                return d1 * d2;
        } else if(ch == '/'){
                return d1 / d2;
        } else {
		std::cout<<"Enter a valid operator"<<std::endl;
	}
}

double getValue(){
	double i;
	std::cout<<"Enter a double value:"<<std::endl;
	std::cin>>i;
	return i;
}
