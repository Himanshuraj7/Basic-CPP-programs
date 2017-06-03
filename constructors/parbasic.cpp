#include<iostream>
#include<conio.h>
using namespace std;
class student
{
      int a,b;
      public:
             student(int x,int y)
             {
                      cout<<"constructor\n";
                      a=x;
                      b=y;
                      }
             void show()
             {
                  cout<<"a="<<a<<endl<<"b="<<b<<endl;
                  }
                  
                  };
int main()
{
    student s(2,3);
    s.show();
    getch();
    return 0;
}
