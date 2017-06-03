#include<iostream>
using namespace std;
class arithmatic{
	protected:
		int num1,num2;
		public:
			void get(){
				cin>>num1>>num2;
			}
};
class sum:public arithmatic{
	protected:
		int z;
		public:
			void add(){
				z=num1+num2;
				cout<<"sum="<<z<<endl;
			}
};
class minus1{
	protected:
		int x,num3,num4;
		public:
			void sub(){
				cin>>num3>>num4;
				x=num3-num4;
				cout<<"sub="<<x<<endl<<ends;
			}
};
class result:public sum,public minus1{
		public:
			void show(){
				cout<<"sum is="<<z<<endl;
				cout<<"sub is="<<x;
           }
};
int main(){
	result c;
	c.get();
	c.add();
	c.sub();
	c.show();
}
