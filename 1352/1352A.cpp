#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int k=0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]!='0')
			k++;
		}
		if(k<=1)
		{
			cout<<k<<endl;
			cout<<s<<endl;
		}
		else
		{
			int n=s.length();
			vector<int>ans;
			int j=1;
			for(int i=n-1;i>=0;i--)
			{
				int t=s[i]-'0';
				t=t*j;
				j=j*10;
				
				if(t!=0)
				ans.push_back(t);
			}
			cout<<k<<endl;
			for(auto a:ans)
			cout<<a<<" ";
			
			cout<<endl;
		}
	}
}
