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
	int n;
	in>>n;
	
	string s;
	in>>s;
	int zeroes=0,ones=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='0')
		{
			zeroes++;
		}
		else if(s[i]=='1')
		{
			ones++;
		}
	}
	
	ou<<abs(ones-zeroes)<<nl;
}


