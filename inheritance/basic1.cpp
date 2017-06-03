#include<iostream>
#include<conio.h>
using namespace std;
class base
{
      protected:
      int num1;
      public:
        void getdata()
        {
             cout<<"enter num1";
             cin>>num1;
             }
        void display()
        {
             cout<<num1<<endl;
        }
        };
class derived:public base
{
      int num2;
      public:
             void get()
             {
                  cout<<"enter num2";
                  cin>>num2;
                  }
             void disp()
             {
                  cout<<num2<<endl;
                  cout<<num1;
                  }
                  };
int main()
{
    base b;
    derived d;
    d.getdata();
    d.display();
    d.get();
    d.disp();
    getch();
    return 0;
}
            
             
