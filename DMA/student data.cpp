#include<iostream>
using namespace std;
class student{
	char name[10];
	int roll;
	public:
		void get(){
			cout<<"enter name=";
			cin>>name;
			cout<<"enter roll=";
			cin>>roll;
		}
		void display(){
			cout<<name<<ends<<roll<<endl;
		}
};
int main(){
	student *s;
	int n,i;
	cout<<"enter the no of students=";
	cin>>n;
   s=new student[n];
for(i=0;i<n;i++){
	(s+i)->get();
	(s+i)->display();
}	
}
