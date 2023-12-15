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
	int cash=1;
	int max=1;
	cin>>n;
	int h0,m0;
	cin>>h0>>m0;
	int h,m;
	while(--n){
	    cin>>h>>m;
	    if(h0==h && m0==m){
	        cash++;
	        if(cash>max){
	            max=cash;
	        }
	    }else{
	        cash=1;
	    }
	    h0=h;
	    m0=m;
	}
	cout<<max;
	return 0;
}



