#include<iostream>
using namespace std;
int reverse(int);
int r=0;
int main()
{
int n,r;
cout<<"Enter number";
cin>>n;
r=reverse(n);
cout<<"reverse of "<<n<<" is "<<r;
return 0;
}
int reverse(int n)
{
int d;
if(n==0)
return 0;
else
{
d=n%10;
n=n/10;
r=r*10+d;
reverse(n);
}
return (r);

 }
