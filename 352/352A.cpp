#include<bits/stdc++.h>
#define nl endl
#define ou cout
#define in cin
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define yes ou<<"YES"<<nl;
#define no ou<<"NO"<<nl;
#define all(arr) arr.begin(),arr.end()
#define forin(a) for(auto &i:a)in>>i;
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
	
	vi a(n);
	
	forin(a)
	
	int z=0;
	int f=0;
	
	for(auto i:a)
	{
		if(i==0)
		{
			z++;
		}
		else
		f++;
	}
	
	if(z==0)
	{
		ou<<-1<<nl;
	}
	else if(f<9)
	{
		ou<<0<<nl;
	}
	else
	{
		f-=f%9;
		
		for(int i=0;i<f;i++)
		ou<<5;
		
		for(int i=0;i<z;i++)
		ou<<0;
	}
	
}



