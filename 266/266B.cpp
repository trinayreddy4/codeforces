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
	int n,t;
	in>>n>>t;
	
	string s;
	in>>s;
	
	while(t--)
	{
		for(int i=0;i<n;i++)
		{
			if(s[i]=='B'&&s[i+1]=='G')
			{
				swap(s[i],s[i+1]);
				i++;
			}
		}
	}
	ou<<s<<nl;
	
}



