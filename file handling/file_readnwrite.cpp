#include<iostream>
using namespace std;
#include<conio.h>
#include<fstream>
class student
{
      int rn;
      char name[10];
      public:
             void getdata()
             {
                  cin>>rn;
                  cin>>name;
                  }
                  void putdata()
                  {
                       cout<<rn<<"\t"<<name<<"\n";
                       }
};
int main()
{
    student s;
    fstream file;
    file.open("marks.txt",ios::out);
    for(int i=1;i<=3;i++)
    {
            s.getdata();
            file.write((char*)&s,sizeof(s));
}
file.close();
  file.open("marks.txt",ios::in);
   file.read((char *)&s,sizeof(s));
  while(file)
  {
             
              s.putdata();
               file.read((char *)&s,sizeof(s));
}
file.close();
getch();
}
