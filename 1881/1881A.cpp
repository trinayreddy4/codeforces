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
		int n,m;
		in>>n>>m;
		
		string s,x;
		in>>x>>s;
		int c=0;
		bool ans=true;
		if(x.find(s)!=string::npos)
		{
			ou<<c<<nl;
			continue;
		}
		while(x.length()<1000)
		{
			x+=x;
		
			if(x.find(s)!=string::npos)
			{
				c++;
				ou<<c<<nl;
				ans=false;
				break;
			}
				c++;
			
		}
		
		if(ans)
		{
			ou<<-1<<nl;
		}
		
	}
}


