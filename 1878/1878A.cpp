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
		int n,k;
		in>>n>>k;
		
		vi a(n);
		unordered_set<int>m;
		for(auto &&i:a)
		{
			in>>i;
			m.insert(i);
		}
				
		if(m.find(k)!=m.end())
		{
			yes
		}
		else
		no
	}
}


