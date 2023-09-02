#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	int hd=n/100;
	n=n%100;
	int twed=n/20;
	n=n%20;
	int tend=n/10;
	n=n%10;
	int fd=n/5;
	n%=5;
	int sum=hd+twed+tend+fd+n;
	cout<<sum<<endl;
}
