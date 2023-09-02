#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int x=0;
	string str2="X++",str3="++X",str4="--X",str5="X--";
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		if (s.find(str2) != string::npos||s.find(str3) != string::npos) 
		{
			x++;
		} 
		else if(s.find(str4) != string::npos||s.find(str5) != string::npos)
		{
			x--;
		}
	}
	cout<<x<<endl;
}
