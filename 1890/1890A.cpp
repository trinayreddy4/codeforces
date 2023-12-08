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
		int n;
		in>>n;
		
		vi a(n);
		map<int,int>mp;
		for(auto &i:a)
		{
			in>>i;
			mp[i]++;
		}
		
		if(n==2)
		{
	ou<<"Yes"<<nl;
		continue;
	}	
		if(mp.size()>=3)
		{
			ou<<"No"<<nl;
			continue;
		}
		
		vi te;
		for(auto i:mp)
		{
			te.push_back(i.second);
		}
		
		
		if(abs(te[0]-te[1])<=1||te.size()==1)
		{
			ou<<"Yes"<<nl;
			continue;
		}	
		else
		ou<<"No"<<nl;
	}
}



