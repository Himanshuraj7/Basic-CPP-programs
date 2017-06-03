#include<iostream>
using namespace std;
class abc
{
  int x,y;
	public:
		abc(int x,int y)
		{
			this->x=x;
			this->y=y;
		}
		void display()
		{
			cout<<"x="<<x<<'\t'<<"y="<<y<<endl;
			
		}
};

int main()
{
	abc a(3,5);
	a.display();
 }
