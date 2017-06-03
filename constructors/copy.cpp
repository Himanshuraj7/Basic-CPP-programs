
#include<iostream>
#include<conio.h>
using namespace std;
class rectangle
{
      int l,b,a;
      public:
             rectangle()
             {
                       l=5;
                       b=6;
                       
                       }
                      rectangle(rectangle &r)
                      {
                        l=r.l;
                        b=r.b;
                        }
                  void area()
                  {
                       a=l*b;
                       cout<<"area ="<<a;
                       }
                       };
                       int main()
                       {
                           rectangle r2;
                           rectangle r1(r2);
                          // rectangle r1=r;
                           r2.area();
                           r1.area();
                           getch();
                           return 0;
                           }           
