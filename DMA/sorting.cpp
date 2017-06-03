#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int *p;
    p=new int[5];
    int i,j,t;
    cout<<"enter the elements";
    for(i=0;i<5;i++)
    {
                    cin>>*(p+i);
                    };
    for(i=0;i<5;i++)
    {
                    cout<<*(p+i)<<"\t";
                    }

for(i=0;i<5;i++)
{
                for(j=i+1;j<5;j++)
                {
                                if(*(p+i)>*(p+j))
                                {
                                    t=*(p+i);
                                    *(p+i)=*(p+j);
                                    *(p+j)=t;
                                    }
                                    }}
cout<<"sorting list=";
for(i=0;i<5;i++)
{
  cout<<*(p+i)<<"\t";
}
getch();
return 0;
}
                                                 
                                                 
