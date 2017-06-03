#include<iostream>
#include<conio.h>
using namespace std;
class rectangle
{
   int l,b,a;
   public:
          rectangle(int x,int y):l(x),b(y)
          {
                        }
                 rectangle(rectangle &r)
                 {
                                     l=r.l;
                                     b=r.b;
                                     }                     
                     void area()
                     {
                          a=l*b;
                          cout<<"area="<<a;
                          }
                        
                        };
                        int main()
                        {
                           
                            rectangle r2(2,4);
                            rectangle r(r2);
                            
                            r.area();
                            r2.area();   
                              getch();
             return 0;
         }
