#include<bits/stdc++.h>
#define nl endl
#define ou cout
#define in cin
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define yes ou<<"YES"<<nl;
#define no ou<<"NO"<<nl;
#define all(arr) arr.begin(),arr.end()
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
		int n,k;
		in>>n>>k;
		
		string s;
		in>>s;
		
		unordered_map<char,int>mp;
		
		for(auto i:s)
		mp[i]++;
		int odc=0;
		for(auto i:mp)
		{
			if(i.second&1)
			odc++;
		}
		
		if(odc-k<=1)
		yes
		else
		no
	}
}



