#include<bits/stdc++.h>
#include<numeric>
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
		string s,t;
		in>>s;
		in>>t;
		
		int l=lcm(s.length(),t.length());
		
		if(s.length()<t.length())
		{
			if(t.find(s)==string::npos)
			{
				ou<<-1<<nl;
				continue;
			}
			else
			{
				for(int i=0;i<l;i++)
				{
					ou<<s;
				}
				ou<<nl;
			}
		}
		else
		{
			if(s.find(t)==string::npos)
			{
				ou<<-1<<nl;
				continue;
			}
			else
			{
				for(int i=0;i<l;i++)
				{
					ou<<t;
				}
				ou<<nl;
			}
		}
	}
}



