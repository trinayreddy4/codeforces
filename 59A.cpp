#include<bits/stdc++.h>
#include<ctype.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int l=0,u=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]>=65&&s[i]<=90)
		u++;
		else if(s[i]>=97&&s[i]<=122)
		l++;
	}
	if(u>l)
	{
		s=toupper(s);
	}
	else
	{
		s=tolower(s);
	}
	cout<<s<<endl;
}
