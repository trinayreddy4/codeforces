#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int valids=0;
	for(int i=0;i<n;i++)
	{
		int p;
		cin>>p;
		
		if(p+k<=5)
		{
			valids++;
		}
	}
	cout<<valids/3<<endl;
}


