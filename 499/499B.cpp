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
	int n,m;
	in>>n>>m;
	
	map<string,string>mp;
	for(int i=0;i<m;i++)
	{
		string t1,t2;
		
		cin>>t1>>t2;
		mp[t1]=t2;
	}
	
	vs s(n);
	
	for(auto &i:s)
	in>>i;
	
	for(int i=0;i<n;i++)
	{
		int len=s[i].length();
		int len2=mp[s[i]].length();
		
		if(len<=len2)
		{
			ou<<s[i]<<" ";
		}
		else
		{
			ou<<mp[s[i]]<<" ";
		}
	}
	
}



