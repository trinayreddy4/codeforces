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
int ans=0,n,c=0,i;
    cin>>n;
    int a[n+9];
    for(i=1; i<=n; i++)
        cin>>a[i];
    for(i=1; i<=n; i++)
    {
        c=0;
        int x=a[i];
        while(x != -1)
        {
            x=a[x];
            c++;
        }
        ans=max(ans, c);
    }
    cout<<ans+1<<endl;

    return 0;
}



