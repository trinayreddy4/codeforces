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
	 string s1, s2;
    in >> s1 >> s2;
    
    if(s1.size() != s2.size())
        ou << max(s1.size(), s2.size()) << nl;
    else if(s1 == s2)
    	ou << -1 << nl;
    else
    	ou << s1.size() << nl;
    return 0;
}



