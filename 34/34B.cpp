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
	int m,n;
	in>>n>>m;
	vi a(n);
	
	for(auto &&i:a)
	in>>i;
	
	sort(a.begin(),a.end());
	int j=n-1;
	int sum=0;
	
	for(int i=0;i<n;i++)
	{
		if(a[i]<0&&m>0)
		{
			sum+=abs(a[i]);
			m--;
		}
	}
	ou<<sum<<nl;
}


