#include<iostream>
#include<conio.h>
#include<fstream>

using namespace std;
int main()
{
    char ch;
    char filename[7];
    cout<<"enter the file name";
    cin>>filename;
    ofstream out;
    out.open(filename);
    cout<<"enter dta";
    while(ch!='.')
    {
                  ch=getche();
                  if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                  {
                  out.put(ch);
                  }
                  }
                  out.close();
       ifstream iff;
       iff.open(filename);
       while(!iff.eof())
       {
                        ch=iff.get();
                        
                        
                        cout<<ch;
                        
                        }
       iff.close();
       getch();
       return 0;
       }
    
