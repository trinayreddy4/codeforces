#include<bits/stdc++.h>
#define nl endl
#define ou cout
#define in cin
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
	vi ans;
	for(int i=1;i<=10000;i++)
	{
		if((i%3)==0)
		{
			continue;
		}
		else if((i%10)==3)
		{
			continue;
		}
		else if((i%3)==0&&(i%10)==3)
		{
			continue;
		}
		
		ans.push_back(i);
	}
	while(t--)
	{
		int n;
		in>>n;
		ou<<ans[n-1]<<nl;
	}
}


