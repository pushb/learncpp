/* These programs are written on top of a automatic template */

#include <iostream>
using namespace std;

class father;

class son{
	private:
		int income = 10000;
		int cgpa = 7;
	public:
		void print_income(void);
		friend void edit_income(father&, son&);
		void print_income(son);
};
class father{

	private:
		int income = 7000;
	public:
		father(){
		}
		father(int i){
			income = i;
		}
		friend void edit_income(father&, son&);

		void print_income(father);
};

void edit_income(father& f, son &s){
	f.income = f.income + 1000;
	s.income = s.income + 1000;
}

void father::print_income(father f){
	cout<<"income of father "<<f.income<<endl;
}

void son::print_income(son s){
	cout<<"income of son "<<s.income<<endl;
}
int main(){

	father ff{19000};
	father f1;
	son s1;
	ff.print_income(f1);
	edit_income(f1, s1);
	ff.print_income(f1);
	s1.print_income(s1);
	return 0;
}

