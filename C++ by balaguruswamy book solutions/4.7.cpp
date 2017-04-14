#include <iostream>

using namespace std;

double power(double, int j=2);
int power(int, int k=3);

int main()
{
	int m;
	int n;
	cin>>m;
	cout<<power(m);
}

double power(double x, int y)
{
	double result=1;
	for(int i=1;i<=y;i++)
	{
		result=result*x;
	}
	return result;
}

int power(int x, int y)
{
	int result=1;
	for(int i=1;i<=y;i++)
	{
		result=result*x;
	}
	return result;
}

