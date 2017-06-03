#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
int i=10;
int &j=i; // j is a reference variable of I
cout<<"value"<<i<<"\t"<<j;
j=20;
cout<<"modified value"<<i<<"\t"<<j<<endl;
cout<<"address"<<&i<<endl<<&j;

getch(); 
}
