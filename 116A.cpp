#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int curr=0,income,outgo,cap=0;
	for(int i=0;i<n;i++)
	{
		cin>>outgo>>income;
		curr-=outgo;
		curr+=income;
		cap=max(cap,curr);
	}
	cout<<cap<<endl;
}
