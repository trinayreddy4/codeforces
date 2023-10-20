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
	int s,n;
	in>>s>>n;
	
	vector<pair<int,int>>a;
	
	for(int i=0;i<n;i++)
	{
		int x,y;
		in>>x>>y;
		
		a.push_back({x,y});
	}
	
	
	sort(a.begin(),a.end());
	
	for(int i=0;i<n;i++)
	{
		if(a[i].first>=s)
		{
			no
			return 0;
		}
		
		s+=a[i].second;
	}
	
	yes
	return 0;
}


