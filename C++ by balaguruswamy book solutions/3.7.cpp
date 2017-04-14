#include <iostream>
#include<conio.h>
#include <math.h>
using namespace std;
 int main()
 {
 	float sum=0.0;
 	int n;
 	cin>>n;
 	float x,p;
 	for(int i=1;i<=n;i++)
 	{
 		p=(float)1/i;
 		x= pow(p, i);
 		sum=sum+x;
 	}
 	cout<<sum;
 
 
 	getch();
 }
