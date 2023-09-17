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
	int n,k;
	in>>n>>k;
	
	int odd=2*k-1;
		
	if(n>odd)
	{
		k=k-(n/2);
		ou<<2*k<<nl;
	}
	else
	{
		ou<<odd<<nl;
	}
}


