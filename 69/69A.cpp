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
	int x=0,y=0,z=0;
	for(int i=0;i<n;i++)
	{
		int t1,t2,t3;
		in>>t1>>t2>>t3;
		x+=t1,y+=t2,z+=t3;
	}
	
	if(x==0&&y==0&&z==0)
	yes
	else
	no
}


