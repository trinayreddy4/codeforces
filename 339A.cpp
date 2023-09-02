#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	if(s.length()==1)
	{
		cout<<s<<endl;
	}
	else
	{
		int n1=0,n2=0,n3=0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='1')
			{
				n1++;
			}
			else if(s[i]=='2')
			{
				n2++;
			}
			else if(s[i]=='3')
			{
				n3++;
			}
		}
		string ans="";
		int i=0;
		while(ans.length()<s.length())
		{
			if(n1>0)
			{
				ans+='1';
				n1--;
			}
			else if(n2>0)
			{
				ans+='2';
				n2--;
			}
			else if(n3>0)
			{
				ans+='3';
			}
			if(ans.length()!=s.length())
			{
				ans+='+';
			}
		}
		cout<<ans<<endl;		
	}
}
