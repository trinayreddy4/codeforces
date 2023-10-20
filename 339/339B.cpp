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
	int n,m;
	in>>n>>m;
	
	vi a(m);
	
	for(auto &i:a)
	{
		in>>i;
	}
	ll curr=1,ans=0;
	for(int i=0;i<m;i++)
	{
		
		if(a[i]>curr)
		{
			ans+=(a[i]-curr);
			curr=a[i];
		}
		else if(a[i]<curr)
		{
			ans=ans+(n-curr)+a[i];
			curr=a[i];
		}
		else
		{
			curr=a[i];
		}
		
	}
	ou<<ans<<nl;
}


