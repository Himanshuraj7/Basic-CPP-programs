#include<fstream>
#include<iostream>
using namespace std;

int main()
{
	ofstream fin1;
    fin1.open("out.txt");
    fin1<<"hello hi";
    fin1.close();
    ifstream fin;
    fin.open("out.txt");
	int count = 0;
    char ch; 
    while(!fin.eof())
    {
        //fin.get(ch);
        ch=fin.get();
        count++;
    }
    
    cout << "Number of characters in file are " << count;
    
    fin.close();
    return 0;
}
