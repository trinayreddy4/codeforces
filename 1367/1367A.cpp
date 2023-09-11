#include<bits/stdc++.h>
#define nl endl
#define ou cout
#define in cin
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
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
    fastread();
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		in>>s;
		
		string ans="";
		
		for(int i=0;i<s.length()-1;i++)
		{
			if(i==0)
			{
				ans+=s[i];
			}
			else if(s[i]==s[i-1]) 
			{
					ans+=s[i];
					i++;
			}
		}
		ans+=s[s.length()-1];
		ou<<ans<<nl;
	}
}


