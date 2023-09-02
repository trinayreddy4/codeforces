#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	cin>>x;
	int c=0;
	while(x>0)
	{
		if(x<=5)
		{
			x-=x;
		}
		else
		x=x-5;
		c++;
	}
	cout<<c<<endl;
	
}
