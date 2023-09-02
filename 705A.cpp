#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a="I hate that ";
	string b="I love it ";
	string c="";
	string d="I hate it ";
	string e="I love that ";
	
	int n;
	cin>>n;
	if(n%2==0)
	{
	for(int i=1;i<n;i++)
	{
		if(i&1)
		{
			c+=a;
		}
		else
		{
			c+=e;
		}
	}
	c+=b;
	}
	else
	{
		for(int i=1;i<n;i++)
		{
		if(i&1)
		{
			c+=a;
		}
		else
		{
			c+=e;
		}
		}
		c+=d;
	}
	cout<<c<<endl;
}
