/* These programs are written on top of a automatic template */

#include <iostream>
using namespace std;

class IntPair{

	public:
	int x = 0, y = 0;

	void set(int i, int j){
		x = i;
		y = j;
	}
	
	void print(void){
		cout<<"Pair("<<x<<","<<y<<")"<<endl;
	}
};
int main(){

	IntPair p1;
	IntPair p2;
	IntPair p3{3,4};

	p1.set(1,1);
	p2.set(2,2);
	
	p1.print();
	p2.print();
	p3.print();

	return 0;
}

