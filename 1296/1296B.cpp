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
		int s;
		in>>s;
		
		int pw=1000*1000*1000;
		int ans=0;
		while(s>0)
		{
			while(s<pw)
			pw/=10;
			
			ans+=pw;
			s-=pw -pw/10;
		}
		ou<<ans<<nl;
	}
}


