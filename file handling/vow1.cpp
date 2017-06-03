#include<iostream>
#include<conio.h>
using namespace std;
#include<fstream>
int main()
{
    char ch;
    ofstream outfile;
    outfile.open("h.txt");
    while(ch!='.')
    {
       cin>>ch;
       outfile.put(ch);
       
       }
       outfile.close();
       ifstream infile;
       infile.open("h.txt");
       while(!infile.eof())
       {
          infile.get(ch);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        {
                
                cout<<ch;
               
                }
                
                }
                infile.close();
                getch();
                return 0;
                }                               
    
    
    
