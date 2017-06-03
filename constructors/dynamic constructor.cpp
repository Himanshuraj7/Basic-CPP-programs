#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class str
{
      char *name;
      int length;
      public:
    
              str(char *s)
             {
                      length=strlen(s);
                      name=new char[length+1];
                      strcpy(name,s);
                      }
                      void show() 
{ 
     cout<<"NAME IS:->"<<name<<endl;
     cout<<"Length is:->"<<length<<endl;
 }
 
};
int main()
 { 
	
	char *first="ABCDEF"; 
	str  n1(first), n2("ABCD"), n3("ABCDE"); 
 	n1.show();
    n2.show();
    n3.show();
    getch();
 } 
