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
		int x,n,m;
		in>>x>>n>>m;
		
		while(x>0&&n&&(x/2)+10<x)
		{
			n--;
			x=x/2+10;
			
		}
		
		if(x<=m*10)
		yes
		else
		no
	}
		
}


