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
	int a,b,c;
	in>>a>>b>>c;
	
	int ae=a*b*c;
	int be=a*b+c;
	int ce=a+b+c;
	int de=a+b*c;
	int fe=(a+b)*c;
	int ee=a*(b+c);
	ou<<max(ae,max(be,max(ce,max(de,max(fe,ee)))))<<nl;
}



