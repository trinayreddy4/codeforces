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
	int t;
	cin>> t;
	while(t--)
	{
		int n, k;
		in>> n >> k;
		string s;
		in >> s;
		vector<int> w(n + 1);
        for (int i = 1; i <= n; i++)
            w[i] = w[i - 1] + int(s[i - 1] == 'W');
        //0 0 0 1 1 2
        int result = INT_MAX;
        for (int i = k; i <= n; i++)
            result = min(result, w[i] - w[i - k]);
        cout << result << endl;
	}
}



