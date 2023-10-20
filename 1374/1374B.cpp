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
		int i;
		bool flag=true;
		for(i=0;i<10000;i++)
		{
			if(n==1)
			{
				break;
			}
			else if(n%6==0)
			{
				n/=6;
			}
			else if(n%3==0)
			{
				n=n*2;
			}
			else
			{
				ou<<-1<<nl;
				flag=false;
					break;
			}
		}
		if(flag)
		ou<<i<<nl;
	}
}


