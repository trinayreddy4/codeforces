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
	string s;
	in>>s;
	int i=0;
	bool flag=true;
	string ans="";
	vs temp;
	while(i<s.length())
	{
		if(s.substr(i,3)=="WUB")
		{
//			ou<<i<<endl;
			if(!flag)
			ou<<" ";
			i+=3;
			continue;
		}
		else
		{
			flag=false;
			ou<<s[i];
			i++;
		}
	}
	ans="";
	for(auto i:temp)
	{
		ans=ans+i+" ";	
	}
	ou<<ans<<nl;
}


