#include<iostream>
#include<conio.h>
using namespace std;
class A
{
      int a;
      public:
             void get()
             {cin>>a;
                  }
             void show()
             {
                  cout<<a;
             }
      class B
      {
            int b;
            public:
                   void get()
                   {
                        cin>>b;
                        }
                   void show()
                   {
                        cout<<b;
                   }
                   }b1;
                   }a1;
int main()
{
    a1.get();
    a1.b1.get();
    a1.show();
    a1.b1.show();
    getch();
}
