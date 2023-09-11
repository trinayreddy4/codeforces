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
	int n;
	in>>n;
	int m=0,c=0;
	for(int i=0;i<n;i++)
	{
		int a,b;
		in>>a>>b;
		
		if(a>b)
		m++;
		else if(a<b)
		c++;
	}
	
	if(m<c)
	{
		ou<<"Chris"<<nl;
	}
	else if(m>c)
	{
		ou<<"Mishka"<<nl;
	}
	else
	{
		ou<<"Friendship is magic!^^"<<nl;
	}
}


