#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	for(int i=0;i<10;i++)
	{
		for(int j=1;j<=9;j++)
		{
			cout<<exp(-(float)(i+(float)j/10))<<"___";
		}
		cout<<"\n"<<"---------------------------------";
		cout<<"-------------------------------------\n";
	}
	return 0;
}
