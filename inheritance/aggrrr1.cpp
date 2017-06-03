#include<iostream>
#include<conio.h>
using namespace std;
class date
{
      int dd, mm, yy;
      public: 
              void read()             
 { 
              cout<<"Enter the date, month and year";
  cin>>dd>>mm>>yy;           
     }
  void  display()            
{ 
        cout<<" date,month and year";
       cout<<dd<<"/"<<mm<<"/"<<yy<<endl;       
}
};
class student
{
            int reg_no;
            char name[20];
            date dob;
             public:
                    
     void read()             
	{   cout<<"reg no and name, ";
           cin>>reg_no>>name;
            dob.read();                  
 } 
      void display()                 
	 {   cout<<"reg_no and name are:";
            cout<<reg_no<<ends<<name<<endl;
            dob.display();             
              }
                       };
int main()       
 {
  student s1;
   s1.read();
  s1.display(); 
  getch();
  return 0;
            }


