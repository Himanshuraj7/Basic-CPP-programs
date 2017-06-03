#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter values of a and b";
    cin>>a>>b;
      try
      {
              if(b==0)
              throw b;
              else
              {
              c=a/b;
              cout<<"the value of c="<<c<<endl;
              }
              }
            catch( int m )
            {
                   cout<<"Division by zero not possible";
                   
                   }
                   getch();
                   return 0;
                   }    
