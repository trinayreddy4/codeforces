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
	
	vi a(n);
	vi b(n-1);
	vi c(n-2);
	
	ll sa=0,sb=0,sc=0;
	
	for(auto &i:a)
	{
		in>>i;
		sa+=i;	
	}
	for(auto &i:b)
	{
		in>>i;	
		sb+=i;
	}
	
	for(auto &i:c)
	{
		in>>i;	
		sc+=i;
	}
	
	ou<<sa-sb<<nl<<sb-sc<<nl;
}



