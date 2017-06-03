#include<iostream>
#include<conio.h>
using namespace std;
void divide(int x,int y)
{
     int z;
     z=x/y;
     if(z!=0)
     cout<<z<<endl;
     else 
     throw 0;
     }
     int main()
     {
         try{
             divide(2,20);//(200,20)
             cout<<"one try over\n";
              divide(20,10);
             }
             catch(int)
             {
                       cout<<"Answer cannot be zero\n";
                       }                         
         cout<<"try catch over\n";
         getch();
                       
             }
     
