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
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		bool flag=true;
		sort(a,a+n);
		for(int i=1;i<n;i++)
		{
			if(abs(a[i]-a[i-1])>1)
			{
				cout<<"NO"<<endl;
				flag=false;
				break;
			}
		}
		if(flag)
		cout<<"YES"<<endl;
	}
}
