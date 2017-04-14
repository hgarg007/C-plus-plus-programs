#include <iostream>

using namespace std;

inline int max(int x, int y ,int z)
{
	if(x>=y && x>=z)
	cout<<x;
	else if(y>=x && y>=z)
	cout<<y;
	else
	cout<<z;
}

int main()
{
	max(5,6,7);
}
