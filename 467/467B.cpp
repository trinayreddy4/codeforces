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
	int n,m,k;
	in>>n>>m>>k;
	
	vi p(m+1);
	
	for(auto &i:p)
	{
		in>>i;
	}
	
	int ans=0;
	bitset<255>a(p[m]);
	for(int i=0;i<m;i++)
	{
		bitset<255>te(p[i]);
		
		int c=0;
		for(int i=0;i<255;i++)
		{
			if(a[i]!=te[i])
			c++;
		}
		
		if(c<=k)
		ans++;
	}
	ou<<ans<<nl;
	
//	ou<<ans<<nl;
}



