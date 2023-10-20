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
    ll x,y,a,b;
    cin>>t;
    while(t--){
        cin>>x>>y>>a>>b;

        if(x > y){
            swap(x,y);
        }
        ll ans1 = 0, ans2 = 0;
        ans1 = x*a + y*a;
        ll z = y - x;
        ans2 = z*a + x * b;

        cout<<min(ans1,ans2)<<endl;

    }

    return 0;
}



