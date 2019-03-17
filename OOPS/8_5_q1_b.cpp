/* These programs are written on top of a automatic template */

#include <iostream>
#include <string>
using namespace std;

class Ball{
	string m_color;
	double m_radius;
	
	public:

	Ball(double r)
	{
		m_radius = r;
	}

	Ball(string c="Blue", double r = 10.8){
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

