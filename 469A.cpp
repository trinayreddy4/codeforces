#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,p,q;
	cin>>n;
	cin>>p;
	int a[p];
	vector<bool>levels(n+1,false);
	for(int i=0;i<p;i++)
	{
		cin>>a[i];
		levels[a[i]]=true;
	}
	cin>>q;
	int b[q];
	
	for(int i=0;i<q;i++)
	{
		cin>>b[i];
		levels[b[i]]=true;
	}
	
	for(int i=1;i<=n;i++)
	{
		if(!levels[i])
		{
			cout<<"Oh, my keyboard!"<<endl;
			return 0;
		}
	}
	cout<<"I become the guy.";
	
	
	
}
