#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k,r;
	cin>>k>>r;
	
	for(int i=1;i<=100001;i++)
	{
		if((i*k)%10==r||(i*k)%10==0)
		{
			cout<<i<<endl;
			return 0;
		}
	}
}
