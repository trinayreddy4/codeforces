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
	int n,t;
	
	in>>n>>t;
	
	if(t!=10)
	{
		for(int i=0;i<n;i++)
		{
			ou<<t;
		}
	}
	else
	{
		if(n==1)
		{
			ou<<-1<<nl;
		}
		else
		{
			ou<<10;
			for(int i=0;i<n-2;i++)
			{
				ou<<0;
			}
		}
	}
}



