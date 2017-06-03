#include<iostream>
#include<conio.h>
using namespace std;
class a
{
      protected:
      int x,y;
      public:
             void getdata(int m,int n)
             {
                  x=m;
                  y=n;
                  }
                  };
                  
class b:public a
{  int multi;
      public:
             void mul()
             {
                  
                  multi=x*y;
                  }
             void display()
             {
                  cout<<multi;
                  }
                  };
                  
class c:public a
{
      public:
             void sum()
             {
                  cout<<x+y<<"\t";
                  }
                  };
int main()
{
    c c1;
    b b1;
    b1.getdata(2,3);
    c1.getdata(4,3);
    b1.mul();
    b1.display();
    c1.sum();
    getch();
    return 0;
} 
