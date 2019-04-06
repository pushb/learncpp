/* These programs are written on top of a automatic template */

#include <iostream>
using namespace std;
class Something{

	private:
		static int some_val;
		int other_val = 9;

	public:
		void print_val(){
			cout<<some_val<<endl;
		}

		static void edit_val(){
			some_val = some_val + 10;
	//		ohter_val = 10; //will throw an error.
		}
};

int Something::some_val = 12;
int main(){

	Something s;
	s.print_val();
	s.edit_val();
	s.print_val();
	return 0;
}

