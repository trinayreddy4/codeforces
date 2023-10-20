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
	int a[11][11];
	for(int i=1;i<=10;i++)
	{
		for(int j=1;j<=10;j++)
		{
			if(i==1||i==10||j==1||j==10)
			a[i][j]=1;
			else if(i==2||i==9||j==2||j==9)
			a[i][j]=2;
			else if(i==3||i==8||j==3||j==8)
			a[i][j]=3;
			else if(i==4||i==7||j==4||j==7)
			a[i][j]=4;
			else if(i==5||i==6||j==5||j==6)
			a[i][j]=5;
			
		}
	}
	while(t--)
	{
		char x;
		int ans=0;
		for(int i=1;i<=10;i++)
		{
			for(int j=1;j<=10;j++)
			{
					in>>x;
					if(x=='X')
					{
						ans+=a[i][j];
					}	
			}
		}
		ou<<ans<<nl;
	}
}


