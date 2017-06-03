#include<iostream>
#include<conio.h>
#include<fstream>
#include<ctype.h>
using namespace std;
int main()
{
    ofstream outfile;
    outfile.open("w.txt",ios::app);
    char ch;
    while(ch!='.')
    {
                  cin>>ch;
                 
                  outfile.put(ch);
                   
                  
                  }
    outfile.close();
    ifstream infile;
    infile.open("w.txt");
    while(!infile.eof())
    {
      
      infile.get(ch);
      ch=toupper(ch);
      cout<<ch;
      }
      infile.close();
      getch();
      return 0;
      }
    
    
