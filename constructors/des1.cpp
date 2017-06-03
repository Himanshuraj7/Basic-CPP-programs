#include<iostream>
using namespace std;
#include<conio.h>
class book
{
      static int count;
      public:
      book();
      ~book();
      
};
int book::count;
book::book()
{
            cout<<"construtor called"<<endl;
            count++;
            cout<<"count is"<<count<<endl;
        
}
book::~book()
{
             cout<<"destructor called"<<endl;
             count--;
              cout<<"count is"<<count<<endl;
}
                
int main()
{
    {
  book b1,b2;
                {
               book b3; 
               }
               {
               book b4;
               } 
               } 
        getch();
}
