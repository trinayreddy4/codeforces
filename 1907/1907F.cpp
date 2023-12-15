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
	int t;
	cin>>t;
	while(t--)
	{
		ll n,res=INT_MAX;
		in>>n;
		vector<ll>v(n);
		// 3 2 1 5 4
		for(auto &i:v)
		in>>i;
		
		ll deviation=0,idx=-1;
		for(int i=0;i<n;i++)
		{
			if(v[i]>v[(i+1)%n])
			{
				deviation++;
				idx=(i+1)%n;
			}
		}if(deviation < 2) {
            if(idx == 0)
                res = 0; 
            res = min(res, min(n-idx,2+idx));
         }
         deviation = 0, idx = -1;
         for(ll i = 0; i < n; i++) {
            if(v[i] < v[(i+1)%n]) { 
                deviation++;
                idx = (i+1)%n;
            }  
         }
         if(deviation < 2) {
            if(idx == 0) {
                res = min(res,1LL);
            }
            res = min(res, min(1+(n-idx),1+idx));
         }
         if(res == INT_MAX)
            res = -1;
         cout<<res<<endl;	}
}



