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
	
	vector<pair<int,int>>a;
	
	for(int i=0;i<n;i++)
	{
		int t,as;
		in>>t>>as;
		
		a.push_back({t,as});
	}
	
	sort(a.begin(),a.end());
	
	for(int i=0;i<n-1;i++)
	{
		if(a[i].first<a[i+1].first)
		{
			if(a[i].second>a[i+1].second)
			{
				ou<<"Happy Alex"<<nl;
				return 0;
			}
		}
		
	}
	ou<<"Poor Alex"<<nl;
			
}



