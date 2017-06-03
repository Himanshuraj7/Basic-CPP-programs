#include<iostream>
#include<conio.h>
using namespace std;
class a
{
      protected:
                int x;
      public:
             void get()
             {
                  cout<<"enter x=";
                  cin>>x;
                  }
                  void show()
                  {
                       cout<<"the value of x"<<x<<endl;
                       }
                       };

class b
{
      protected:
                int y;
      public:
             void get()
             {
                  cout<<"enter the value of y=";
                  cin>>y;
                  }
                  void show()
                  {
                       cout<<"the value of y="<<y<<endl;
                       }
                       };
class c:public a,public b
{
      public:
    /*         void get()
             {
                  a::get();
                  b::get();
                  }
                  void show()
                  {
                  a::show();
                  b::show();
}     */        void mul()
             {
                  int z=x*y;
                  cout<<z;
                  }
                  };
int main()
{
    c c1;
    //c1.get();
    c1.a::get();
  
    c1.b::get();
    //c1.show();
    c1.a::show();
    c1.b::show();
    c1.mul();
    getch();
    return 0;
}
