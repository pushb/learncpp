/* These programs are written on top of a automatic template */

#include <iostream>
#include <vector>
#include <array>
using namespace std;
int main(){
	vector <int> vect1 {1, 2, 3, 4, 5, 6};
	cout<<"size: "<<vect1.size()<<endl;

	vect1.push_back(12);	
	cout<<"size: "<<vect1.size()<<endl;

	for(int i : vect1)
		cout<<i<<endl;
	return 0;
}

