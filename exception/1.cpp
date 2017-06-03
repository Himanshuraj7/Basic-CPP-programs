#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int mothersage=20;
    int sonsage=30;
    try
    {
        if(sonsage>mothersage)
        throw '4';
        cout<<"both ages are perfect";
        }
        
        catch(char i)
        {
cout<<"sons age cannot be greater than mother age Error no: "<<i;
                  }
                  getch();
                  return 0;
                  }
