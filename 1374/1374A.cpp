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
	int t;
	cin>>t;
	while(t--)
	{
		int x,y,n;
		        cin>>x>>y>>n;
        ll ans = 0;
        ans = n - n % x + y;
        if(ans <= n){
            cout<<ans<<endl;
        }
        else{
            cout<<(n - n % x - (x - y))<<endl;
        }

	}
}


