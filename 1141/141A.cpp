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
	int n, m;
cin >> n >> m;
int result = -1;
if (m % n == 0) {
    result = 0;
    int d = m / n;
    while (d % 2 == 0)
        d /= 2, result++;
    while (d % 3 == 0)
        d /= 3, result++;
    if (d != 1)
        result = -1;
}
cout << result << endl;

}



