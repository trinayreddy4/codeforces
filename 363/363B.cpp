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
	int n,k;
	in>>n>>k;
	
	vi h(n);
	
	for(auto &i:h)
	{
		in>>i;
	}
	int sum=0;
	for(int i=0;i<k;i++)
	{
		sum+=h[i];
	}
	int ans=1;
	int j=0;
	int tmp=sum;
	for(int i=k;i<n;i++)
	{
		sum+=h[i];
		sum-=h[j++];
		
		if(tmp>sum)
		{
			tmp=sum;
//			ou<<tmp<<" "<<sum<<nl;
		ans=j+1;
		}
	}
	ou<<ans<<nl;
}



