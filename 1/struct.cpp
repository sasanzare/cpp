// access specifiers in C++ structures like in classes.
#include <iostream> 
#include <cstring>     
using namespace std; 

struct Employee{
	private :
		int Ecode ,Pay ;
	public:
		Employee ( int E,int P ):Ecode(E),Pay(P){}
		int getpay () {return Pay;} 
		int getcode() {return Ecode;}
};

int main (){
	Employee E1 (1, 3500);
	Employee E2 (2, 7000);
	E1 = E2;
	cout<< E1.getcode ()<<endl<< E1.getpay()<<endl;
} 

