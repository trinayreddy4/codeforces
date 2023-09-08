#include<bits/stdc++.h>
#define nl endl
using namespace std;
typedef vector<int> vi;
int main()
{
	int n;
	cin>>n;
	vi a(n);
	for(auto &&i:a)
	cin>>i;
	
	auto i=max_element(a.begin(),a.end());
	
	int max=*i;
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=max-a[i];
	}
	cout<<sum<<nl;
	
}


