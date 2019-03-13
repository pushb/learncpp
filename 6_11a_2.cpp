/* These programs are written on top of a automatic template */

#include <iostream>
int main(){

	const int &aa = 123;
	int x = 11;
	int &xx = x;
	std::cout<<"aa :"<<aa<<std::endl;
	std::cout<<"&aa :"<<&aa<<std::endl;
	std::cout<<"&x :"<<&x<<std::endl;
	std::cout<<"&xx :"<<&xx<<std::endl;
//	aa = 234;//will throw error.
//	std::cout<<"aa :"<<aa<<std::endl;
	
	return 0;
}

