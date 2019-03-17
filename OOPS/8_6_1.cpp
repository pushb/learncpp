/* These programs are written on top of a automatic template */

#include <iostream>
using namespace std;
class Rect{

	int len;
	int wid;

	public:

	Rect(){
		cout<<"Default constructor"<<endl;
	}
	Rect(int l, int w){
		cout<<"Explicit constructor"<<endl;
		len = l;
		wid = w;
	}	
	void print(){
		cout<<len<<" "<<wid<<endl;
	}

	void set(int l, int w){
		len = l;
		wid = w;
	}
};

int main(){

	Rect r1;

	r1.set(19, 16);
	r1.print();

	Rect r2(11, 12);
	r2.print();

	Rect r3{11, 12};
	r2.print();
	return 0;
}

