/* These programs are written on top of a automatic template */

#include <iostream>
#include <string>
using namespace std;
struct emp_s{
	int num;
	string name;
};

int sumTo(const int max){
	int s = 0;
	for (int i = 1; i <= max; i++){
		s = s + i;
	}
	return s;
}

void printEmployeeName(const emp_s &s){
	cout<<"emp name:"<<s.name;
}

void minmax(const int x, const int y, int &min, int &max){
	x>y?max=x,min=y:max=y,min=x;
}

int getIndexofLargestValue(const int *a, const int size){
	int  max = 0, index_max;
	for(int i = 0; i < size; i ++){
		if(a[i] > max){
			max = a[i];
			index_max = i;
		}
	}
	return index_max; 
}

const int& getElement(const int *a, const int index){
	return a[index];
}
int main(){

	int arr[10] = {1,2,3,4,15,6,7,8,9,10};
	cout<<"max index:"<<getIndexofLargestValue(arr, 10)<<endl;
	cout<<"Index at "<<2<<" :"<<getElement(arr, 2)<<endl;	
	return 0;
}

