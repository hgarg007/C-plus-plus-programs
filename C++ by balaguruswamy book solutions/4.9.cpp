#include <iostream>

using namespace std;

double area(int, int);
double area(int);

int main()
{
	int b,h,r;
	cin>>b>>h>>r;
	cout<<area(b,h);
	cout<<area(r);
}

double area(int x,  int y)
{
	return 0.5*x*y;
}

double area(int x)
{
	return 3.14*x*x;
}
