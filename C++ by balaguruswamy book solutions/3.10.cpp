#include<iostream>
#include<conio.h>
#include <stdlib.h>
#include <sstream>
using namespace  std;

int main()
{
	int n;
	cout<<"Enter no. of users \n";
	cin>>n;
	string a[n][3];
	for(int i=0;i<n;i++)
	{
		cin>>a[i][0];
		cin>>a[i][1];
	}
	float sum,r;
	for(int i=0;i<n;i++)
	{
		sum=50.00;
		
		//----Conversion String to Float------
		
		float value = atoi(a[i][1].c_str());
		if(value>=0)
		{
		if(value<=100 ){
		
		r=0.60;}
		else if(value<=300){
		
		r=0.80;}
		else {
	
		r=0.90;}
      	}
		sum=(float)sum+(float)value*r;
		if(sum>300)
		sum=(float)(sum+(float)0.15*sum);
		
		//-----------Conversion Float to String---------
		
       stringstream ss (stringstream::in | stringstream::out);
	   ss << sum;
	   string test = ss.str();
	   a[i][2]=test;
		
	}
	cout<<"Complete  list \n";
	cout<<"Name \t"<<"Units \t"<<"Charge \n";
	for(int i=0;i<n;i++)
	{
		
		for(int j=0;j<3;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<"\n";
	}
	
	
	
	getch();
	return 0;
}
