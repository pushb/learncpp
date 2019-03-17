/* These programs are written on top of a automatic template */

#include <iostream>
#include <string>
using namespace std;

class Ball{
	string m_color = "Blue";
	double m_radius = 10;
	
	public:
	Ball(){
	}	

	Ball(double r){
		m_radius = r;
	}

	Ball(string c){
		m_color = c;
	}
	
	Ball(string c, double r){
		m_color = c;
		m_radius = r;
	}

	void print(void){
		cout<<"color: "<<m_color<<", radius: "<<m_radius<<endl;
	}
};

int main(){

	Ball def;
	def.print();

	Ball red("red");
	red.print();

	Ball twenty(20.0);
	twenty.print();

	Ball custom("black",  15.5);
	custom.print();

	return 0;
}

