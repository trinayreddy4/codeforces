#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i=n-1,j=1;
		int cnt=0;
		if(n&1)
		{
			cnt=(n/2);
		}
		else
		cnt=(n/2)-1;
		cout<<cnt<<endl;
	}
	
}
