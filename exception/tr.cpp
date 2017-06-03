#include<iostream>
using namespace std;
#include<conio.h>
void test(int x)
{
     char msg[]="exception";
     try
     {
              if(x==1)
              throw x;
              else if(x==0)
              throw 'x';
              else if(x==2)
              throw 1.1;
              else if(x==3)
              throw msg;
              else
              cout<<"END OF TRY";
     }
    catch(int m)
     {
               cout<<"caught integer\n";
     }
     catch(char z)
     {
                cout<<"caught character\n";
     }
     catch(double n)
     {
                 cout<<"caught float\n";
     }
     catch(char msg[])
     {
                cout<<msg<<endl;
                } 
                catch(...)
                {
     cout<<"end of try catch\n";
     }
}
int main()
{
    test(1);
    test(0); 
    test(2);
    test(3);
        getch();
}
