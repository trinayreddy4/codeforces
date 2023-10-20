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
	int n;
	in>>n;
	
	map<string,int>mp;
	for(int i=0;i<n;i++)
	{
		string t;
		in>>t;
		
		mp[t]++;
	}
	int me=-1;
	string ans="";
	for(auto i:mp)
	{
		if(i.second>me)
		{
			me=i.second;
			ans=i.first;
		}
	}
	
	ou<<ans<<nl;
}



