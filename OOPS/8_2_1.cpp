/* These programs are written on top of a automatic template */

#include <iostream>
using namespace std;
class Student{
	public:
	int physics;
	int maths;
	int chemistry;

	void printMarks(){
		cout<<"Maths: "<<maths<<endl;
		cout<<"Physics: "<<physics<<endl;
		cout<<"Chemistry: "<<chemistry<<endl;
	}
};

int main(){

	Student John  {75,50,25};
/*	John.maths = 75;
	John.physics = 50;
	John.chemistry = 25;
*/	John.printMarks();	


	return 0;
}

