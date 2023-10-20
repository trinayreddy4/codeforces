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
	int k;
	in>>k;
	
	vi a(12);
	
	for(auto &&i:a)
	in>>i;
	
	sort(a.begin(),a.end(),greater<int>());
	int i=0,sum=0,j=0;
	while(sum<k)
	{
		sum+=a[i];
		i++;
		if(i>12)
		{
			ou<<-1<<nl;
			return 0;
		}
	}
	ou<<i<<endl;
}


