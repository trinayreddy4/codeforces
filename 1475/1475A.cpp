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
	lli t;
	cin>>t;
	while(t--)
	{
		lli n;
		in>>n;
		
		if(n&1)
		{
			yes
			continue;
		}
		vi a;
		lli i=2;
		for(i=2;i*i<=n;i++)
		{
			if(i&1)
			{
				if(n%i==0)
				a.push_back(i);	
			}
		}
		
		for(lli j=i;j>1;j--)
		{
			if(n%j==0 &&j&1)
			a.push_back(n/j);
		}
		
		if(a.size()>0)
		yes
		else
		no
	}
}


