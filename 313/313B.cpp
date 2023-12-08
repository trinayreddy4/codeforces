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
	 int m,l,r,cnt=0;

    int dp[100005];
    string s;

    cin>>s>>m;

    for(int i=1;i<s.size();i++){

        if(s[i]==s[i-1])
            cnt++;

        dp[i]= cnt;

    }

    while(m--){
        cin>>l>>r;
        cout<<dp[r-1]-dp[l-1]<<endl;
    }
}



