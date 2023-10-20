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
    int n,t;
    in>>n>>t;
    
	lli temp;
	
	temp=pow(10,n-1);
	
	for(int i=temp;i<pow(10,n)-1;i++)
	{
		if(i%t==0)
		{
			ou<<i<<nl;
			return 0;
		}
	}
	ou<<-1<<nl;
}



