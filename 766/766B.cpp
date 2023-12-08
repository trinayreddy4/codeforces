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
		
		vi a(n);
		
		for(auto &i:a)
		in>>i;
		
		sort(a.begin(),a.end());
		
		for(int i=1;i<n-1;i++)
		{
			if(a[i-1]+a[i]>a[i+1])
			{
				yes
				return 0;
			}
		}
		no
}



