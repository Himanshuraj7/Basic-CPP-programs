#include<iostream>
#include<conio.h>
using namespace std;
class rectangle
{
      private:
              int length,breadth;
              public:
              rectangle(int x,int y);
              int area();
              };
      rectangle::rectangle(int x,int y)
      {
                               length=x;
                               breadth=y;
             }
      int rectangle::area()
      {
          return length*breadth;
          }
      int main()
      {
          rectangle r(10,6);
          
          cout<<"area of rectangle="<<r.area();
          getch();
          return 0;
          }
                               
