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
		
		int div=-1;
		
		if(n<=1399)
		div=4;
		else if(n<=1599)
		div=3;
		else if(n<=1899)
		div=2;
		else
		div=1;
		
		ou<<"Division "<<div<<nl;
	}
}


