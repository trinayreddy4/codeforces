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

int findM(int n)
{
	for(int i=n;i>0;i--)
	{
		if((i&(i-1))==0)
		{
			return i;
		}
	}
}
int main()
{
    fastread();
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		in>>n;
		
		
		vi a(n);
		for(auto &i:a)
		{
			in>>i;
		
		}
		bool rv=false;
		for(int i=0;i<n-1;i++)
		{
			if(a[i]>a[i+1])
			{
				rv=true;
			}
			else
			{
				rv=false;
				break;
			}
		}
		
		if(rv)
		{
			no
			continue;
		}
		
		int ae=findM(n);
		bool flag=true;
		ou<<ae<<nl;
		for(int i=ae+1;i<n;i++)
		{
			if(a[i-1]>a[i])
			{
				no
				
				flag=false;
				break;
			}
		}
		
		if(flag)
		yes
	}
}



