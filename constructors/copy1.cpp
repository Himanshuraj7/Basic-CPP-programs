#include<iostream>
using namespace std;
class trial
{
	int a;
	public:
		trial()
		{
			a=10;
			
		}
		trial( trial &t)
		{
			cout<<"value in copy constructor";
			cout<<++t.a<<endl;
			t.a++;
			
		}
		void display()
		{
			cout<<"a="<<a<<endl;
		}
};
int main()
{
	trial t;
	t.display();
	trial t1(t);
	t.display();
}
