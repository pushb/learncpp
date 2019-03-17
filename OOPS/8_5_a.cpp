/* These programs are written on top of a automatic template */

#include <iostream>
#include <cstdint>

using namespace std;

class RGBA{

	uint_fast8_t m_red;
	uint_fast8_t m_green;
	uint_fast8_t m_blue;
	uint_fast8_t m_alpha;
	
	public:
	RGBA(int m_r = 0, int m_g = 0, int m_b = 0, int m_a = 255)
		:m_red (m_r),
		m_green(m_g),
		m_blue (m_b),
		m_alpha(m_a)
	{
		m_red = m_r;
		m_green = m_g;
		m_blue = m_b;
		m_alpha = m_a;
	}

	void print(){

		cout<<"r = "<<static_cast<int>(m_red);
		cout<<" g = "<<static_cast<int>(m_green);
		cout<<" b = "<<static_cast<int>(m_blue);
		cout<<" a = "<<static_cast<int>(m_alpha)<<endl;;
	}
};
int main(){

	RGBA teal(12, 14, 15, 16);
	teal.print();
	RGBA crimpson( 14, 15, 16);
	crimpson.print();
	return 0;
}

