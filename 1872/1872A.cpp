#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		
		if(b>a)
		swap(a,b);
		int count=0;
		while(a>b)
		{
			a-=c;
			b+=c;
			count++;
		}
		cout<<count<<endl;
	}
}


