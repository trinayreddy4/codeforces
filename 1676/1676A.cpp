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
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		in>>s;
		int sum=0;
		for(int i=0;i<3;i++)
		{
			sum+=(int)s[i]-'0';
		}
		for(int i=s.length()-1;i>=3;i--)
		{
			sum-=(int)s[i]-'0';
		}
		if(sum==0)
		yes
		else
		no
	}
}


