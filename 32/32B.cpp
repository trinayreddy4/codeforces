#include<bits/stdc++.h>
#define nl endl
#define ou cout
#define in cin
#define fastio std::ios::sync_with_base(false); std::cin.tie(nullptr);
#define yes ou<<"YES"<<nl;
#define no ou<<"NO"<<nl;
using ll=long long;
using lli=long long int;
using namespace std;
typedef vector<int> vi;
typedef vector<float> vf;
typedef vector<string> vs;
int main()
{
	string s;
	in>>s;
	string ans="";
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='.')
		{
			ans+="0";	
		}
		else if(s[i]=='-')
		{
			if(s[i+1]=='-')
			{
				i++;
				ans+="2";
			}
			else if(s[i+1]=='.')
			{
				ans+="1";
				i++;
			}
		}
//		ou<<ans<<nl;
	}
	ou<<ans<<nl;

}


