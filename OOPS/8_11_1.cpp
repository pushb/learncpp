/* These programs are written on top of a automatic template */

#include <iostream>
using namespace std;
class Sample{

	public:
	static int samp_int ;

	int get_val(){
		return samp_int;
	}

	void set_val(int samp_int){
		this->samp_int = samp_int;
	}	
};
int Sample::samp_int = 14;;
int main(){

	Sample s;
	cout<<"value: "<<s.get_val()<<endl;
	s.set_val(16);
	cout<<"value: "<<s.get_val()<<endl;

	Sample t;	
	cout<<"value: "<<t.get_val()<<endl;
	t.set_val(18);
	cout<<"value: "<<s.get_val()<<endl;

	cout<<"value: "<<Sample::samp_int<<endl;
	return 0;
}

