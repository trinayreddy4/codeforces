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
		int n;
		in>>n;
		if((n/2)%2==0)
		{
			ou<<"YES"<<nl;
			int sum1=0,sum2=0;
			for(int i=2;i<=n;i+=2)
			{
				ou<<i<<" ";
				sum1+=i;
			}
			for(int i=1;i<n-2;i+=2)
			{
				ou<<i<<" ";
				sum2+=i;
			}
			ou<<sum1-sum2<<nl;
		}
		else
		{
			ou<<"NO"<<nl;
		}
	}
}


