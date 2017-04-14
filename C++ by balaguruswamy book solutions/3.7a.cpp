#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int n,k=1;
	cout<<"Enter number \n";
	cin>>n;
	double sum=0.0;
	float x;
	cout<<"\n Enter angle \n";
	cin>>x;
	cout<<"\n Sin"<<x<<"= "<<sin(x);
	for(int i=1;i<=n;i++)
	{
		int fac=1;
		for(int j=1;j<=k;j++)
		{
			fac=fac*j;
		}
		
		sum=sum+(pow(-1,i+1)*pow((float)x,k))/fac;
		k=k+2;
	}
	
	cout<<"\n Sin"<<x<<"= "<<sum;
	
	return 0;
}
