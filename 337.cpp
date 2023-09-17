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
	int n,m;
	in>>n>>m;
	
	vi a(m);
	
	for(auto &&i:a)
	in>>i;
	
	sort(a.begin(),a.end());
	int ans=a[n-1]-a[0],ar,b;
	for(int i=1;i<=m-n;i++)
	{
		ans=min(a[i+n-1]-a[i],ans);
	}
	ou<<ans<<nl;
}


