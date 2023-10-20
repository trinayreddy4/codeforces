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
	int t;
	cin>>t;
	while(t--)
	{
		int x;
  cin >> x;
  vector<int> ans;
  int sum = 0, last = 9;
  while (sum < x && last > 0) {
    ans.push_back(min(x - sum, last));
    sum += last;
    last--;
  }
  if (sum < x) {
    cout << -1 << "\n";
  } else {
    reverse(ans.begin(), ans.end());
    for (int i : ans) {
      cout << i;
    }
    cout << "\n";
  }
}
	
}


