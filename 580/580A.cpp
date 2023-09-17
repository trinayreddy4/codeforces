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
	int curr=1,temp=1;
	for(int i=1;i<n;i++)
	{
		if(a[i]>=a[i-1])
		temp++;
		else
		temp=1;
		
		curr=max(temp,curr);
	}
	ou<<curr<<nl;
}


