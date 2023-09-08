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
		vector<int>d(n),s(n);
		
		for(int i=0;i<n;i++)
		{
			cin>>d[i]>>s[i];
		}
		int ans=INT_MAX;
		for(int i=0;i<n;i++)
		{
			if(s[i]%2==0)
			{
				int r=(s[i]-2)/2;
				ans=min(ans,r+d[i]);
			}
			else
			{
				int r=(s[i])/2;
				ans=min(ans,r+d[i]);
			}
		}
		cout<<ans<<endl;
		
	}
}


