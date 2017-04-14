#include <iostream>

using namespace std;

class vector
{
	int column;
	float a[];
	
	public:
		void getvector();
		void modify();
		void mul();
		void display();
		friend vector add(vector, vector);
};

void vector :: getvector()
{
	cout<<"Enter column";
	cin>>column;
	for(int i=0; i<column; i++)
	{
		cin>>a[i];
	}

}

void vector :: modify()
{
	int mod;
	cout<<"Enter element to modify";
	cin>>mod;
	cin>>a[mod-1];

}

void vector :: mul()
{
	int scalar;
	cout<<"\nEnter scalar value";
	cin>>scalar;
	for(int i=0;i<column;i++)
	{
		a[i]=a[i]*scalar;
	}
}

void vector :: display()
{
	for(int i=0; i<column; i++)
	{
		cout<<a[i]<<"\t";
	}
}

vector add(vector x, vector y)
{
	vector z;
	for(int i=0; i<x. column; i++)
	{
		z.a[i]=x.a[i]+y.a[i];
	}
	return z;
}

int main()
{
	vector a,b,c;
	
	a.getvector();
	a.modify();
	a.mul();
	a.display();
	
	b.getvector();
	b.modify();
	b.mul();
	b.display();
	
	c=add(a,b);
	c.display();
	
	
	return 0;

}
