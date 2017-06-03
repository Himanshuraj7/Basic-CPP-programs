#include<iostream>
using namespace std;
#include<fstream>
int main()
{
	ofstream f;
	f.open("s.dat");
	f<<"File\n";
	f<<"handling\n";
	f.close();
	ifstream i;
	char str[20];
	i.open("s.dat");
	cout<<"the contents in file are";
	while(!i.eof())
	{
		i.getline(str,20);
		cout<<str<<endl;
	}
	i.close();
	}
