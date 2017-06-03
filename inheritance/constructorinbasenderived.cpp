#include<iostream>
using namespace std;
#include<conio.h>
class base
{
      public:
             base()
             {
                   cout<<"base constructor\n";
                   }
                   ~base()
                   {
                          cout<<"base class destructor called";
                          }
};
class derived:public base
{
      public:
             derived()
             {
                      cout<<"derived constructor\n";
                      }
                       ~derived()
                   {
                          cout<<"derived class destructor called";
                          }
};
int main()
{
    {
    derived d;
    }
    getch();
}
