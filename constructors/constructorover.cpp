#include<iostream>
#include<conio.h>
using namespace std;
class rectangle
{
   int l,b,a;
   public:
          rectangle()
          {   l=b=5;
                     }
                    rectangle(int a)
                    {  l=b=a;
                                  } 
          rectangle(int x,int y)
          {
                     l=x;
                     b=y;
                     }
                     
                     void area()
                     {
                          a=l*b;
                          cout<<"area="<<a;
                          }
                        
                        };
                        int main()
                        {
                            rectangle r;
                            //rectangle r1(4);//implicit call
                            rectangle r1=rectangle(4);//explicit call
                            rectangle r2=rectangle(4,5);
                            r.area();
                            r1.area();
                            r2.area();   
                              getch();
             return 0;
             }
  
  
  
             

