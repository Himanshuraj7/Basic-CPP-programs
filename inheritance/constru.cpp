#include<iostream>
#include<conio.h>
using namespace std;
class base
{
      public:
             base()
             {
                   cout<<" base no parameter constructor\n";
                   }
                   };
class derived:public base
{
      int a,b;
      public:
             derived(int x,int y)
             {
                         a=x;
                         b=y;
             cout<<"\n derived class constructor\n";
             }
             };
int main()
{
    derived d(20,3);
    getch();
}
             
