#include<iostream>
using namespace std;
#include<fstream>
#include<conio.h>
int main()
{
	int a;
ifstream ifil("abc1.txt");
if(!ifil)
{
cout<<"file cannot open correctly";
exit(1);
}
ifil.seekg(-3,ios::end);
int x1=ifil.tellg();
cout<<"size of file is= "<<x1<<endl;
ifil>>a;
cout<<a;
ifil.seekg(-2,ios::cur);
int x=ifil.tellg();
cout<<"size of file is= "<<x;
getch();
}
