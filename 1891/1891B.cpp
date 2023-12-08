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
		int n,q;
		in>>n>>q;
		
		vi a(n),b(q);
		
		for(auto &i:a)
		in>>i;
		
		for(ll i=0;i<q;i++){
           ll x; cin>>x;
           if(b.empty() || b.back()>x){
             b.push_back(x);
           }
		
		for(int i=0;i<n;i++)
		{
			
			for(auto &it:b)
			{
			 if(a[i]%(1<<it)==0){
                    a[i]|=(1<<it-1);
                }
			}
		}
		
		for(int i=0;i<n;i++)
		ou<<a[i]<<" ";
		
		ou<<nl;
	}
	}
}



