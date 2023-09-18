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
    fastread();
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		in>>n;
		
		int count2021=n%2020;
		int count2020=(n-count2021)/2020 -count2021;
		
		if(count2020>=0&&(count2020*2020+count2021*2021)>=n)
		{
			yes
		}
		else
		{
			no
		}
		}
	}


