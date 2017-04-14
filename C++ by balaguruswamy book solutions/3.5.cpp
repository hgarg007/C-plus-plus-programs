#include <iostream>
using namespace std;
int main()
{
	int n, a[6];
	cout<<"Enter No. Of Voters";
	cin>>n;
	for(int i=0;i<6;i++)
	{
		a[i]=0;
	}
	
	for(int i=1;i<=n;i++)
	{
		int c;
		cout<<"Give Your Vote "<<i<<"=";
		cin>>c;
		if(c<6 && c>0)
		{
			a[c-1]=a[c-1]+1;
		}
		else
		{
			a[5]=a[5]+1;
		}
		
	}
	for(int i=0;i<5;i++)
	{
		cout<<"Total Votes For Candidate "<<i+1<<"= "<<a[i]<<"\n";
	}
	cout<<"Total Spoilt Votes "<<"= "<<a[5]<<"\n";
	return 0;
}
