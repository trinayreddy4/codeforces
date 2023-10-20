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
	
	map<string,int>temp;
	
	for(int i=0;i<n-1;i++)
	{
		string te=s.substr(i,2);
		temp[te]++;
	}
	
	int max=-1;
	string ans="";
	for(auto i:temp)
	{
		if(i.second>max)
		{
			ans=i.first;
			max=i.second;
		}
	}
	ou<<ans<<nl;
}


