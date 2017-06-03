#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
    
    ofstream out("abc.txt");
    int n[10];
    cout<<"enter 10 numbers";
    for(int i=0; i<10;i++)
    {
            cin>>n[i];
             out<<n[i]<<endl;
            }
    out.close();
    ifstream fin("abc.txt");
    ofstream fout("xyz.txt");
    char ch;
    while(fin)
    {
              fin.get(ch);
              fout.put(ch);
    }
    fin.close();
    fout.close();
    cout<<"File copied successfully \n";
    getch();
    return 0;
}
