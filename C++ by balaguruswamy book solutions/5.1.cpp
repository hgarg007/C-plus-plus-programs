#include <iostream>

using namespace std;

class bank
{
	string name;
	int ano;
	string aname;
	int balance;
	
	public:

		void getdata();
		void deposit();
		void withdraw();
		void display();
};

void bank :: getdata()
{
	cout<<"\nEnter name of acoount holder = ";
	cin>>name;
	cout<<"\nEnter account number = ";
	cin>>ano;
	cout<<"\nEnter account name = ";
	cin>>aname;
	cout<<"\nEnter initial balance = ";
	cin>>balance;
}

void bank :: deposit()
{
	cout<<"\nBefore depositing balance is = "<<balance;
	cout<<"\nNow enter amount to deposit = ";
	int deposit;
	cin>>deposit;
	balance=balance+deposit;
	cout<<"After depositing balance is = "<<balance<<"\n";
}

void bank :: withdraw()
{
	cout<<"\nBefore withdrawing balance is = "<<balance;
	cout<<"\nNow enter amount to withdraw = ";
	int withdraw;
	cin>>withdraw;
	balance=balance-withdraw;
	cout<<"After withdrawing balance is = "<<balance<<"\n";
}

void bank :: display()
{
	cout<<"\nAccount Details"<<"\n"<<name<<"\t"<<ano<<"\t"<<aname<<"\t"<<balance;
}

int main()
{
//	bank a,b,c;
//	a.getdata();
//	a.deposit();
//	a.withdraw();
//	a.display();
//	
//	b.getdata();
//	
//	c.getdata();
//	
//	c.balance=a.balance+b.balance;
//	c.display();


// Problem- 5.3

	bank a[10];
	for(int i=0;i<10;i++)
	{
		
		a[i].getdata();
	}
	
	return 0;
}
