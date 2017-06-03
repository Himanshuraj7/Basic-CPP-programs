//to write data in file
#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
    /*ofstream outfile;
    outfile.open("text.txt");*/ //member function method 
    ofstream outfile("text2.txt");//constructor method
    outfile<<"how \n";
    outfile<<"are"<<endl;
    outfile<<"you";
    outfile.close();
    cout<<"Data Saved";
    getch();return 0;
}
