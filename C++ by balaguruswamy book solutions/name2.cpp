#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	short int t,i,j,k;
	cin>>t;           
	for(i=1;i<=t;i++)
	{
	k=0;
	string m,w;
	cin>>m;
	cin>>w;
	if(w.length()>25000 || m.length()==0)
	{
		break;
	}

	if(m.length()>w.length())
	{
		for(j=0;j<m.length();j++)
		{
			if(m.at(j)==w.at(k))
			{
				k=k+1;
				
				if((k+1)==w.length())
				{
					cout<<"YES \n";
					break;
				}
		        
			}
		}
	
		if((k+1)!=w.length())
		cout<<"NO \n";
	}
	else
	{
		for(j=0;j<w.length();j++)
		{
			if(w.at(j)==m.at(k))
			{
				k=k+1;
		      
			  	if((k+1)==m.length())
			  	{
			  		cout<<"YES \n";
			  		break;
			  	}
	        	
			}
		}
	
		if((k+1)!=m.length())
		cout<<"NO \n";
	}
	
}

return 0;
}
