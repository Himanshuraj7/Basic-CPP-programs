#include<iostream>
#include<conio.h>
using namespace std;
class student
{
      char *name;
      int age;
      public:
             void getdata()
             {
                  cout<<"enter name";
                  name=new char[6];
                  cin>>name;
                  cout<<"enter age";
                  cin>>age;
                  }
             void display()
             {
                  cout<<"the name of student="<<name<<endl;
                  cout<<"the age of student="<<age;
                  }
                  };
int main()
{
    student *s;
    int i;
    s=new student[2];
    for(i=0;i<2;i++)
    {
    (s+i)->getdata();
    (s+i)->display();
}
getch();
return 0;
}
                  
