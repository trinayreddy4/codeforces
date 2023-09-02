#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int c=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<1;j++)
		{
			int te1,te2;
			cin>>te1>>te2;
			if(te2-te1>=2)
			{
				c++;
			}
		}
	}
	cout<<c<<endl;
	
}
