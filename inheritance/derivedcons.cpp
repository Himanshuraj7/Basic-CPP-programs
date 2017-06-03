#include<iostream>
#include<conio.h>
using namespace std;
class base
{
      protected:
      int x;
      public:
             base()
             {
                   x=4;
                   cout<<"base constructor called";
                   }
             void show()
             {
                  cout<<x;
                  }
                  };
class derived:public base
{
      protected:
                int y;
      public:
             derived()
             {
                      y=5;
                      cout<<"derived constructor called";
                      }
             void show()
             {
                  base::show();
                  cout<<y;
                  
                      }
                      };
int main()
{
    derived d;
    d.show();
    getch();
    return 0;
}
                  
