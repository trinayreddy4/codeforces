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
	cin>>t;
	while(t--)
	{
		int n;
		in>>n;
		
		string s=to_string(n);
		int m=1;
		bool flag=true;
		while(m<=10)
		{
			if(m&1 && n%3!=0)
			{
				n++;
			}
			else
			{
				n--;
			}
			
			if(n%3==0)
			{
				ou<<"First"<<nl;
				flag=false;
				break;
			}
			m++;
		}
		
		if(flag)
		{
			ou<<"Second"<<nl;
		}
	}
}



