#include<iostream>
#include<conio.h>
using namespace std;
class book
{
      private:
              char name[20];
              int pages;
              char x;
              char aname[20];
      public:
             void get()
             {
                  cout<<"enter book name=";
                  cin>>name;
                  
                  cout<<"enter no of pages";
                  cin>>pages;
                  cout<<"enter author name=";
                  cin>>aname;
                  try
                  {
                  if(pages<=0)
                  throw x;
                  }
                  catch(...)
         {
                    cout<<"no of pages can not be zero";
                    getch();
                    exit(0);
                    }
                     
                    
                  }
                  void display()
                  {
                       cout<<"author name="<<aname<<endl;
                       cout<<"book name="<<name<<endl;
                       cout<<"no of pages="<<pages<<endl;
                       }
                       };
int main()
{
    book b;
       b.get();
        b.display();
         getch();
                    return 0;
                    }
