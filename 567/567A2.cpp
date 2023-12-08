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
	{
		in>>i;
		
	}
	int mx[10001],mn[100001];
	int st=a[0];
        int ed=a[n-1];
        for(int i=0;i<n;i++)
        {
            mx[i]=max(abs(st-a[i]),abs(ed-a[i]));
            mn[i]=min(abs(a[i+1]-a[i]),abs(a[i]-a[i-1]));
            if(i==0)
                mn[i]=abs(st-a[i+1]);
            else if(i==n-1)
                mn[i]=abs(ed-a[i-1]);

            cout<<mn[i]<<" "<<mx[i]<<endl;
        }
}



