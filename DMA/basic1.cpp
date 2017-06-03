#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int *p;
    int n;
    cout<<"enter the number of elements";
    cin>>n;
    p=new int[n];
   
    int i;
    for(i=0;i<=n-1;i++)
    {
                      cin>>*(p+i);
    }
    for(i=0;i<=n-1;i++)
    {
     cout<<*(p+i)<<"\t";
     }
     getch();
     return 0;
     }
                      
    
