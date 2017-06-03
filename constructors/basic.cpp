#include<iostream>
#include<conio.h>
using namespace std;
class student
{
      int a=23;
      public:
             student()
             {
                      cout<<"constructor\n";
                      a=10;
                      }
             void show()
             {
                  cout<<"a="<<a;
                  }
                  
                  };
int main()
{
    student s;
    s.show();
    getch();
    return 0;
}
