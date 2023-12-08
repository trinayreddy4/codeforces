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
	vector<lli> a(4);
	for(auto &i:a)
	in>>i;
	
	sort(all(a));
	int ans=0;
	//1 3 3 7
	//7 7 7 7
	for(int i=0;i<3;i++)
	{
		if(a[i]==a[i+1])
		{
			ans++;
		}
	}
	ou<<ans<<nl;
}



