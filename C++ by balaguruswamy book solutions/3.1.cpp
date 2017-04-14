#include <iostream>
using namespace std;

int main()
{
	
	int a=1,b=2,temp;
	int & m=a,& n=b;
	temp=m;
	m=n;
	n=temp;
	cout<<a<<"\n"<<b;
	
}
