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
		int a,temp;
		in>>a;
		int count=0;
		for(int i=0;i<3;i++)
		{
			in>>temp;
			if(a<temp)
			count++;
		}
		ou<<count<<nl;
	}
}


