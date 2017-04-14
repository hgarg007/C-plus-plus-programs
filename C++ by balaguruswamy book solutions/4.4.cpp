#include <iostream>

using namespace std;

void a(int, int, int w=10);
void a(int, float);


int main()
{
	a(5,10);
}
void a(int x,int y,int z )
{
	cout<<z;
	z=x+y;
	cout<<z;
}
void a(int m,float n)
{
	int temp;
	temp=m-n;
	cout<<temp;
	
}
