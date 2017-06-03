#include<iostream>
using namespace std;
class base{
	public:
		base(){
			cout<<"constructor for base"<<endl;
		}
		~base(){
			cout<<"destructor for base"<<endl;
		}
};
class derived:public base{
	public:
		derived(){
			cout<<"constructor for derived"<<endl;
		}
		~derived(){
			cout<<"destructor for derived"<<endl;
		}
};
int main(){
	
	
	derived d;

}
