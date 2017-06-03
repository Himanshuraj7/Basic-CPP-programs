#include<iostream>
using namespace std;
int main(){
	int f=5,s=10,*p1,*p2;
	p1=&f;
	p2=&s;
	
	*p1=20;
	*p2=*p1;
	p2=p1;
cout<<p1<<endl<<p2<<endl<<*p1<<endl<<*p2<<endl<<f<<endl<<s<<endl<<&f<<endl<<&s<<endl<<endl;
	
	*p2=45;
cout<<p1<<endl<<p2<<endl<<*p1<<endl<<*p2<<endl<<f<<endl<<s<<endl<<&f<<endl<<&s<<endl<<endl;
}
