/* These programs are written on top of a automatic template */

#include <iostream>
#include <vector>
#include <array>
using namespace std;
int main(){
	array <int, 5> vect1 {101, 201, 301, 401, 501, 601};

	for(int i : vect1)
		cout<<i<<endl;
	return 0;
}

