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
	int n;
	in>>n;
	
	vs a(n);
	
	for(auto &i:a)
	{
		in>>i;
	}
	int c=1;
	for(int i=0;i<a.size()-1;i++)
	{
		string t1=a[i];
		string t2=a[i+1];
		
		if(t1[1]==t2[0])
		{
			c++;
		}
	}
	ou<<c<<nl;
}



