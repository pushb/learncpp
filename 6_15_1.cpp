/* These programs are written on top of a automatic template */

#include <iostream>
#include <array>
using namespace std;

void change_array(std::array<int, 5> &data){
	data[2] = 19;
	cout<<"size of array is:"<<data.size()<<endl;
}

int main(){

	std::array<int, 5> d{0};
	d[1] = 11;
	d[4] = 15;
	change_array(d);

	for(int i : d){
		cout<<i<<endl;
	}
	return 0;
}

