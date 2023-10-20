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
	int n;
	in>>n;
	
	vi a(n);
	for(auto &&i:a)
	in>>i;
	
	vi min(n),max(n);
	
	for(int i=0;i<n-1;i++)
	{
		int x2=a[i+1];
		int x1=a[i];
		
		int tem=x2-x1;
		int tem2=x1-x2;
		
		min[i]=x2-x1;
		max[i]=a[n-1]-x1;
	}
	
	min[n-1]=a[n-1]-a[n-2];
	max[n-1]=a[n-1]-a[0];
	
	for(int i=0;i<n;i++)
	{
		ou<<min[i]<<" "<<max[i]<<nl;
	}
	
}


