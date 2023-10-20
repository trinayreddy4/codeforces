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
	int n,b,d;
	in>>n>>b>>d;
	
	vi a(n);
	
	for(auto &i:a)
	in>>i;
	
	int total=0;
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>b)
		{
			continue;
		}
		
		total+=a[i];
		if(total>d)
		{
			count++;
			total=0;
		}
	}
	
	ou<<count<<nl;
}


