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
	
	for(int i=0;i<s.length();i++)
	{
		if(s.substr(i,3)!="144"&&s.substr(i,2)!="14"&&s.substr(i,1)!="1")
		{
			no
			return 0;
		}
		if(s.substr(i,3)=="144")
		i+=2;
		
		if(s.substr(i,2)=="14")
		i+=1;
	}
	yes
	
}


