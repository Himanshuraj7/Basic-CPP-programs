#include<iostream>
using namespace std;
class wallet{
	int mn,card;
	public:
		void get(){
		cin>>mn>>card;
	}
	void show(){
		cout<<mn<<ends<<card<<endl;
	}
};
class person{
	char name[10];
	wallet w;
	public:
		void get(){
		cin>>name;
		w.get();
	}
	void show(){
		cout<<name<<ends;
		w.show();
	}
};
int main(){
	person p;
	p.get();
	p.show();
}
