#include<iostream>
using namespace std;

void putmatrix();
int m=3,n;
void getmatrix(int,int m=3);
int p[1000][1000];
int main()
{
	

	cout<<"Enter Matrix dimension \n";
	cin>>n;
	getmatrix(n);
	cout<<"Display Matrix \n";
	putmatrix();
	cout<<"Program Successful";
	return 0;
}
void getmatrix(int n,int m)
{
	
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<"Enter Value for p["<<i+1<<"]["<<j+1<<"] = ";
			cin>>p[i][j];
			cout<<"\n";
		}
	}
	
}
void putmatrix()
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<"Value of p["<<i+1<<"]["<<j+1<<"] = ";
			cout<<p[i][j];
			cout<<"\n";
		}
	}
}
