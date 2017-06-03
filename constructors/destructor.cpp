#include<iostream>
#include<conio.h>
using namespace std;
class counter
{
      int id;
      public:
             counter(int i)
             {
                         id=i;
cout<<"constructor with id "<<id<<"runs \n";
            }
            ~ counter(){
cout<<"object with id "<<id<<"destroyed \n";
                      }
                      };
      int main()
      {
{

   counter c1(1);
   counter c2(2);
   counter c3(3);
}
         getch();
          return 0;

          }

