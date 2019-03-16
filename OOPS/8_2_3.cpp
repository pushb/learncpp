/* These programs are written on top of a automatic template */

#include <iostream>
using namespace std;
class Point3d{
	private:
		int m_x, m_y, m_z;
	public:
		void setValues(int i,int  j, int k){
			m_x = i;
			m_y = j;
			m_z = k;
		}

		void print(void){
			cout<<"<"<<m_x<<","<<m_y<<","<<m_z<<">"<<endl;;
		}

		bool isEqual(const Point3d &temp){
			if(m_x == temp.m_x && m_y == temp.m_y && m_z ==  temp.m_z){
				return true;
			}else{
				return false;
			}
		}
};
int main(){
	Point3d point;
	point.setValues(11, 12, 13);
	point.print();
	
	Point3d p;
	p.setValues(11, 22, 33);
	p.print();
	if(p.isEqual(point)){
		cout<<"point and p are equal"<<endl;
	} else{
		cout<<"point and p are not equal"<<endl;
	}
	return 0;
}

