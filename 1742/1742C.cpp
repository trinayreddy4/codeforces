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
		char a[8][8];
		
		for(int i=0;i<8;i++)
		{
			for(int j=0;j<8;j++)
			{
				in>>a[i][j];
			}
		}
		bool flag2=true;
		for(int i=0;i<8;i++)
		{
			bool flag=true;
			for(int j=0;j<8;j++)
			{
				if(a[i][j]=='B')
				flag=false;
			}
			
			if(flag)
			{
				ou<<"R"<<nl;
				flag2=false;
				break;
			}
		}
		
		if(flag2)
		{
			ou<<"B"<<nl;
		}
	}
}


