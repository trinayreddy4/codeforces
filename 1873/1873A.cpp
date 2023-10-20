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
		string s;
		in>>s;
		vi a(3);
		
		for(int i=0;i<3;i++)
		{
			if(s[i]=='a')
			{
				a[i]=1;
			}
			else if(s[i]=='b')
			{
				a[i]=2;
			}
			else
			a[i]=3;
			
		}
		int count=0;
		for(int i=1;i<3;i++)
		{
			if(a[i]<a[i-1])
			{
				count++;
				swap(a[i],a[i-1]);
			}
		}
		for(int i=1;i<3;i++)
		{
			if(a[i]<a[i-1])
			{
				count++;
				swap(a[i],a[i-1]);
			}
		}
		
		if(count<=1 || (s[0]=='c'&&s[2]=='a'))
		yes
		else
		no
				
	}
}


