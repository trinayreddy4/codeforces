#include<bits/stdc++.h>
using namespace std;
bool solve(int n)
{
	vector<int>b(10,0);
	
	while(n>0)
	{
		int t=n%10;
		b[t]++;
		n=n/10;
	}
	for(int i=0;i<10;i++)
	{
		if(b[i]>1)
		return false;
	}
	return true;
}
int main()
{
	int y;
	cin>>y;
	for(int i=y+1;i<=10000;i++)
	{
		if(solve(i))
		{
			cout<<i<<endl;
			break;
		}
	}
}
