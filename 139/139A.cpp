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
int main()
{
    fastread();
	int n;
	in>>n;
	
	vi a(7);
	for(auto &i:a)
	{
		in>>i;
	}
	int ans=0;
	int i=0;
	//110
	while(n>0)
	{
		n=n-a[i%7];
		if(n<=0)
		{
			ou<<(i%7)+1<<nl;
		}
		i++;
	}
}



