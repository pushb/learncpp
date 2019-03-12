/* These programs are written on top of a automatic template */

#include <iostream>
namespace ns1{
	int radius = 32;
}

namespace ns2{
	int radius = 64;
}

int main(){

	std::cout<<"radius in namespace 1 : "<<ns1::radius<<std::endl;
	std::cout<<"radius in namespace 2 : "<<ns2::radius<<std::endl;
	return 0;
}

