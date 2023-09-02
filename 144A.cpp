#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a;
	cin>>n>>a;
	
	int maxi=0,maxn=a,mini=0,minn=a;
	
	for(int i=1;i<n;i++)
	{
		cin>>a;
		if(a>maxn)
		{
			maxn=a;
			maxi=i;
		}
		if(a<minn)
		{
			minn=a;
			mini=i;
		}
	}
	
	cout<<maxi+(n-1-mini)-(mini<maxi?1:0)<<endl;
}
