/* These programs are written on top of a automatic template */

#include <iostream>
#include <array>
#include <assert.h>
using namespace std;

class Stack{
	const int size = 10;
	int arr[10];
	int len = 0;
	
	public:
	
	void reset(void){
		len = 0;
	}

	bool push(int val){
		if(len < size){
			arr[len]=val;
			len += 1;
			return true;
		} else{
			return false;
		}
	}

	int pop(){
		assert(len && "Empty stack cannot be popped");
		return arr[len--]; //Does it makes any sense if i keep --len??
	}

	void print(){
		cout<<"(";
		for(int i = 0; i < len ; i ++){
			cout<<arr[i]<<"\t";
		}
		cout<<")\n";
	}	
};

int main(){

	Stack num;
	num.push(12);
	num.push(14);
	num.push(19);
	num.print();
	num.pop();
	num.pop();
	num.print();
	num.pop();
	num.print();
	num.pop();
	return 0;
}

