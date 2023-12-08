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
	
	vi a(n);
	
	for(auto &i:a)
	{
		in>>i;
	}
	int ind=-1,maxc=-1;
	for(int i=0;i<n;i++)
	{
		if(ceil(a[i]/m)>maxc)
		{
			maxc=ceil(a[i]/m);
			ind=i+1;
		}
	}
	ou<<ind<<nl;
}



