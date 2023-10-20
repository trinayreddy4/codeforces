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
	int a, b, d, m;
    cin >> a >> b;
    int h = a;

    while(a >= b)
    {
        d = a / b;
        h += d;
        m = a % b;
        a = d + m;
    }

    cout << h << endl;
    return 0;
}



