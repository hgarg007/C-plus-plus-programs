#include <iostream>

using namespace std;

class DM
{
	int m, cm;
	
	public:
		void getdata() {
			cout<<"Enter diastance in m and cm\n";
			cin>>m>>cm;
		}
		void display(){
			cout<<"\n"<<m<<" metre & "<<cm<<" centimetre \n";
		}
		
		friend void add(DM, DB);

};

class DB
{
	int f,i;
	
	public:
		void getdata() {
			cout<<"\nEnter diastance in feet and inches\n";
			cin>>f>>i;
		}
		void display(){
			cout<<"\n"<<f<<" feet & "<<i<<" inches \n";
		}
		friend void add(DM, DB);
};

void add(DM n, DB m) {
	m.i=2.54*(m.f*12 + m.i)+m*100+cm;
	n.m=m.i/100;			
	n.cm=m.i%100;
		}
int main()
{
	DM a;
	DB b;
	
	a.getdata();
	a.display();
	
	b.getdata();
	b.display();
	
	return 0;
	
} 
