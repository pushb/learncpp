/* These programs are written on top of a automatic template */

#include <iostream>
using namespace std;
struct st_s{
	int i;
	int j;
};

void fill_details(st_s s){
	s.i = 20;
	s.j = 50;
}

void fill_array_det(int num[3]){
	num[0]= 101;
	num[1] = 102;
	num[2] = 103;
	cout<<"size of arr:"<<sizeof(num)<<endl;
}
int main(){

	st_s q = {12, 13}; 
	cout<<q.i<<" "<<q.j<<endl;
	fill_details(q);
	cout<<q.i<<" "<<q.j<<endl;

	int arr[3] = {201, 202, 203};
	cout<<"size of arr:"<<sizeof(arr)<<endl;
	cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
	fill_array_det(arr);
	cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;

	return 0;
}

