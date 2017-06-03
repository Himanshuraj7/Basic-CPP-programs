//writing and reading both
#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	ofstream fin1;
    fin1.open("out1.txt");
    fin1<<"hello hi";
    fin1.close();
    ifstream fin;
    fin.open("out1.txt");
    char ch; 
    while(!fin.eof())
    {
       
        fin.get(ch);//ch=fin.get();
        cout<<ch;
        
    }
    fin.close();
    return 0;
}
