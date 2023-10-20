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
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		in>>n;
		vi a(n);
		
		for(auto &&i:a)
		in>>i;
		
		sort(a.begin(),a.end());
		
		a[0]++;
		lli mul=1;
		for(int i=0;i<n;i++)
		{
			mul*=a[i];
		}
		ou<<mul<<nl;
	}
}


