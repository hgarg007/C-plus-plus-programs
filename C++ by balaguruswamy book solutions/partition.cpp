#include<iostream>
#include<conio.h>

using namespace std;

int main() {
    int t=4;
    int a[t];
    
    for(int i=0; i<t; i++) {
	cin>>a[i];
	}
	
	int max=a[1];
	int sum=0;
	
	for(int i=0; i<t; i++) {
            
    	if(a[i]>max) 
    	max=a[i];
    	sum=sum+a[i];
    }
    
    if(sum%2!=0) {
                 cout<<"No";
                 }
    else {
         int b[4];
         b[1]=max;
         
         
         
    
                 
                 
                 
	
	
}
