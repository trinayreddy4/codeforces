#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	char curr_color=s[0];
	int c=0;
	for(int i=1;i<n;i++)
	{
		if(curr_color==s[i])
		{
			c++;
		}
		curr_color=s[i];
	}
	cout<<c<<endl;
}
