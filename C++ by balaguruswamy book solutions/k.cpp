#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int color;
	cin>>color;
	int balls;
	cin>>balls;
	long int x=color,sum;
	for(int i=1;i<balls;i++)
	{
		sum=0;
		for(long int j=1;j<=x;j++)
		{
			sum=sum+j;
		}
		x=sum;
	}
	cout<<sum;
}
