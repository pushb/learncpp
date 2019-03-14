/* These programs are written on top of a automatic template */

#include <iostream>
using namespace std;

typedef int (*arith)(int, int);

int sum(int i, int j){
	return i + j;
}

int sub(int i, int j){
	return i - j;
}

int mul(int i, int j){
	return i * j;
}

int divs(int i, int j){
	return i / j;
}

struct  arith_func_struct{
	char ch;
	arith a_f;
};

arith_func_struct a_f_s_array[4] = {
	{'+', sum},
	{'-', sub},
	{'*', mul},
	{'/', divs}
};

int get_a_f_s_arr_index(char ch){
	int size = sizeof(a_f_s_array)/sizeof(arith_func_struct), i;
	for(i = 0; i < size; i++){
		if(ch == a_f_s_array[i].ch)
			break;
	}

	return i;
}

arith getFuncPtr(char ch){
	arith func_ptr;
	
	switch(ch){
		case '+':
			func_ptr = &sum;	
		break;
			
		case '-':
			func_ptr = &sub;	
		break;
			
		case '*':
			func_ptr = &mul;	
		break;
			
		case '/':
			func_ptr = &divs;	
		break;
	}
	return func_ptr;
}

int main(){

	arith func_ptr;
	int i , j, index;
	char ch;
	cout<<"Enter 1st number ::";
	cin>>i;
	cout<<"Enter 2nd number ::";
	cin>>j;
	
	cout<<"What do you want to do now +, -, /, * ? ::";
	cin>>ch;

	/** METHOS 1 **/
/*	
	func_ptr = getFuncPtr(ch);
	cout<<i<<ch<<j<<"="<<func_ptr(i,j)<<endl;
*/

	/** METHOD 2 **/
	index = get_a_f_s_arr_index(ch);
	cout<<i<<ch<<j<<"="<<a_f_s_array[index].a_f(i,j)<<endl;

	return 0;
}

