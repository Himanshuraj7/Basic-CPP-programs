#include<iostream>
#include<conio.h>
using namespace std;
class rectangle
{
      int length,breadth;
      public:
             rectangle(int x=10,int y=20)
             {
                        length=x;
                        breadth=y;
                        }
             int area()
             {
                 return length*breadth;
                  
                  }
                  
                  };
  int main()
  {
      //rectangle r;
      //rectangle r(2);
      rectangle r(2,6);
      cout<<"area ="<<r.area();
      getch();
      return 0;
      }
