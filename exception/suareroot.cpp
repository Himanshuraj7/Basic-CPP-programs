/*to calculate the square root of a given number and handle all the exceptions */
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int  main()
{
     int num;
     float result;
     cout<<"enter the number=";
     cin>>num;
     try
     {
              if(num>30)
              
                        throw 10;
              if(num<0)
              throw 'E';
              cout<<"square root of a number="<<num<<"is="<<sqrt(num);
              }
              catch(int m)
              {
                        cout<<"exception: out of range Error no= "<<m;
                        }
              catch(char)
              {
                         cout<<"square root of negative number doesnot exist";
                         }
              getch();
              return 0;
              }
