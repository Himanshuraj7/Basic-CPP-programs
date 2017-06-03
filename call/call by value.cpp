#include<iostream>
#include<conio.h>
using namespace std;
void swap(int ,int );
void swap(int x,int y)
{
int z;
z=x;
x=y;
y=z;
cout<<"value is"<<x<<endl<<y;
}
int main()
{
int a=10,b=20;
cout<<"before function calling"<<a<<endl<<b<<endl;
swap(a,b);
cout<<"after function calling"<<a<<endl<<b;
getch();
}


