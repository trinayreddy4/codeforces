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
		int cz=0,co=0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='0')
			{
				cz++;
			}
			else
			{
				co++;
			}
		}
		if(min(co,cz)&1)
		{
			ou<<"DA"<<nl;
		}
		else
		{
			ou<<"NET"<<nl;
		}
	}
}


