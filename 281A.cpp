#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	char t=s[0];
	if((int)t>=97)
	{
		s[0]=s[0]-32;
	}
	cout<<s<<endl;
}
