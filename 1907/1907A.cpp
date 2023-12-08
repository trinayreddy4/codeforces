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
		string s;
		in>>s;
		vs a;
		char teee=s[0];
		int val=(int)s[1]-'0';
		int temp=val;
		int j=1;
		for(auto i='a';i<='h';i++)
		{
				if(i!=teee)
				{
				string sr=i+to_string(val);
				a.push_back(sr);
				}
		}
		for(auto i=1;i<=8;i++)
		{
			if(i!=val)
			{
				string sr=teee+to_string(i);
				a.push_back(sr);
			}
		}
		for(auto i:a)
		ou<<i<<nl;
		
	}
}



