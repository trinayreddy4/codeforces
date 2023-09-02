#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	
	vector<bool>a(26,false);
	
	for(int i=0;i<n;i++)
	{
		char e=s[i];
		int temp=(int)e;
		if(temp>=65&&temp<=90)
		{
			a[e-'A']=true;
		}
		else if(temp>=97&&temp<=122)
		{
			a[e-'a']=true;
		}
	}
	
	for(int i=0;i<26;i++)
	{
		if(a[i]==false)
		{
			cout<<"NO"<<endl;
			return 0;
		}
	}
	cout<<"YES"<<endl;
}
