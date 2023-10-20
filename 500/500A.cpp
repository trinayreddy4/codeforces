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
	int n, t;
  scanf("%d %d", &n, &t);
  int a[n];
  for (int i = 1; i < n; i++) {
    scanf("%d", a + i);
  }
  int x = 1;
  while (x < t) {
    x += a[x];
  }
  puts(x == t ? "YES" : "NO");
  return 0;
}



