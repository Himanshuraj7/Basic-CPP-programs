#include<iostream>
using namespace std;
class base{
	int a;
	public:
		base(int a1){
			a=a1;
		}
		void show(){
			cout<<"a="<<a;
		}
};
class derived:public base{
	int b;
	public:
		derived(int b1,int a1):base(a1){
			b=b1;
		}
		void show(){
			base::show();
			cout<<"b="<<b;
		}
};
int main(){
	
	
	derived d(20,40);
	d.show();

}
