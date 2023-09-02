#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	double b=0;
	
	for(int i=0;i<n;i++)
	{
		b+=(double)a[i]/n;
	}
	cout<<fixed<<setprecision(13)<<b<<endl;
}
