#include <stdio.h>
#include <stdlib.h>
int sum(); //You dont need to tell about the parameters it will take
int main(){
	
	printf("Sum is %d\n", sum(2,9));
	return 0;
}
int sum(int i, int j){

	return i + j;
}

