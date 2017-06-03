#include<iostream>
#include<conio.h>
using namespace std;
class rectangle
{
      private:
              int length, breadth;
              public:
                     rectangle()
                     {
                                length=5;
                                breadth=6;
                                }
              int area()
              {
                  return length*breadth;
                  }
                                };
                  int main()
                  {
                      rectangle r;
                      cout<<"Area of rectangle="<<r.area();
                      getch();
                      return 0;
                      }
