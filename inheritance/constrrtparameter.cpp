#include<iostream>
#include<conio.h>
using namespace std;
class base
{
      int a;
      public:
             base (int a1)
             {
                  a=a1;
                  cout<<"base constructor called";
                  }
             void show()
             {
                  cout<<"\n a="<<a;
                  }
                  };
class derived : public base
{
      int b;
      public:
             derived(int bb,int aa):base (aa)
             {
                         b=bb;
                         }
             void show()
             {
                  base::show();
                  cout<<"\n b="<<b;
                  }
                  };
int main()
{
    derived d(20,70);
    d.show();
    getch();
}
