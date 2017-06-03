//composition

#include<iostream>
using namespace std;
class person{
   char	name[20];
   public:
   	void get(){
  	cin>>name;
   }
   void show(){
   	cout<<"name ="<<name<<ends;
   }
   class mobile{
   int sim,money;
   public:
   	void get(){
  	cin>>sim>>money;
   }
   void show(){
   	cout<<"sim ="<<sim<<ends<<"money ="<<money;
   }
}m;
}p;
int main(){
	p.get();
	p.m.get();
	p.show();
	p.m.show();
}
