/* These programs are written on top of a automatic template */

#include <iostream>
using namespace std;
class fraction{

	private:
		int num = 22;
		int den = 7;
		double value = static_cast<double>(num)/den;

	public:
		fraction(){
			cout<<"In implicit constructor";
		}
	
		fraction(int n = 0, int d = 1){
			cout<<"In explicit constructor"<<endl;
			value = static_cast<double>(n)/d;
		}
		
		fraction(double d = 1){
			value = d/den;
		}

		void print_value(){
			cout<<"value is :"<<value<<endl;
		}
		
};
int main(){
	fraction v1(14.21);
	v1.print_value();

	fraction v2(2, 3);
	v2.print_value();

	fraction v3(21);
	v3.print_value();

	fraction v4{45, 9};
	v4.print_value();	
	return 0;
}

