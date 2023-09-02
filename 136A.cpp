#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	vector<int>ans(n+1,0);
	for(int i=0;i<n;i++)
	{
		ans[a[i]]=i+1;
	}
	
	for(int i=1;i<=n;i++)
	cout<<ans[i]<<" ";
}
