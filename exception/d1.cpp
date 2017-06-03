#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a[5];
    int i,n;
    cout<<"enter no of elements";
    cin>>n;
    
    try{
    for (i=0;i<n;i++)
    {
        if(i>=5)
        throw i;
        cin>>a[i];    
}
}
catch(...)
{
          cout<<"array out of bound";
          getch();
          exit(0);
          }
for(i=0;i<n;i++)
cout<<a[i];
    
        getch();
        return 0;
        }
        
