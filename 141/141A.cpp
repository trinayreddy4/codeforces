#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	string b;
	string c;
	cin>>a>>b>>c;
	
	vector<int>alpha(26,0);
	for(int i=0;i<a.length();i++)
	{
		alpha[a[i]-'A']++;
	}
	for(int j=0;j<b.length();j++)
	{
		alpha[b[j]-'A']++;
	}
	for(int k=0;k<c.length();k++)
	{
		alpha[c[k]-'A']--;
	}
	
	for(int i=0;i<26;i++)
	{
		if(alpha[i])
		{
			cout<<"NO"<<endl;
			return 0;
		}
	}
	cout<<"YES"<<endl;
}
