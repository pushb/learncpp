/* These programs are written on top of a automatic template */

#include <iostream>
using namespace std;
class sample{

	public:
	sample(){
		cout<<"Implict constructor"<<endl;
	}
	sample(int i){
		sample();
		cout<<" i = "<<i<<endl;;
	}
	void print(){
		cout<<"Hello world"<<endl;
	}
};
int main(){

	sample s1(2);
	sample s2();
	s2;
	return 0;
}

