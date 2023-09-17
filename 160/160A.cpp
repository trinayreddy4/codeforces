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
	int sum=0;
	for(auto &&i:a)
	{
		in>>i;
		sum+=i;
	}
	
	sort(a.begin(),a.end());
	int arb=sum/2;
	int temp=0;
	int count=0;
	for(int i=n-1;i>=0;i--)
	{
		if(temp<=arb)
		{
			temp+=a[i];
			count++;
		}
		else
		{
			break;
		}
	}
	ou<<count<<nl;
	return 0;
}


