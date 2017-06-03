#include<iostream>
using namespace std;
#include<conio.h>
class a
{
                int x;
      public:
             a(int m)
             {
                  x=m;
                  }
                  void assign() const
                  {
                   //x=78;
                    cout<<x<<endl;
                      
                       }
                       void putdata()
                       {
                            cout<<x;
                            }
                       };
                       int main()
                       {
                       const a a1(7);
                       a1.assign();
                       //a1.putdata();
                         getch();
                         }
                           
                           
   
