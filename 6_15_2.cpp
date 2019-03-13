/* These programs are written on top of a automatic template */

#include <iostream>
#include <array>
using namespace std;
int main(){

	array <int, 5> num;

	num[1] = 10;
	num[4] = 3;		

	cout<<"size of array "<<num.size()<<endl;
	for (int i : num)
		cout<<i<<endl;
	return 0;
}

