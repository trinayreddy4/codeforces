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
long gcd(long a, long b)
{
	return (b == 0) ? a : gcd(b, a % b);
}
int main()
{
    fastread();
	int ts;
	cin>>ts;
	while(ts--)
	{
		  string s, t; 
		  in >> s >> t;
        long u(s.size()), v(t.size());
        long lcm = u * v / gcd(u, v);
        string x(""); 
		for(long p = 0; p < lcm / u; p++)
		{
			x += s;
		}
        string y(""); 
		for(long p = 0; p < lcm / v; p++)
		{
			y += t;
		}
        ou << (x == y ? x : "-1") << endl;
	}
}



