#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	vector<bool>str(26,false);
	int c=0;
	for(int i=0;i<s.length();i++)
	{
		str[s[i]-'a']=true;
	}
	for(int i=0;i<26;i++)
	{
		if(str[i])
		c++;
	}
	if(c&1)
	{
		cout<<"IGNORE HIM!"<<endl;
	}
	else
	{
		cout<<"CHAT WITH HER!"<<endl;	
	}	
	
	
}
