#include<iostream>
#include<conio.h>
using namespace std;
void divide(int x,int y)
{
     cout<<"inside divide\n";
     try
     {    if(y==0)
         throw y;
         else
         cout<<"x/y="<<x/y;   }
            catch(...)
     {
               throw;
               }
     cout<<"outside divide \n";
     }
int main()
{
    cout<<"inside main \n";
    try
    {    
    divide(10,5);
    divide(10,0);
}
catch(int)
{
          cout<<"divide by zero \n";
}
cout<<"end main\n";
getch();
}

               
