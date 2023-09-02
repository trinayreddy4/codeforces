#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int police=0,cases=0;
	int untracked=0;
	for(int i=0;i<n;i++)
	{
		int t;
		cin>>t;
		
		if(t==-1)
		{
			if(police==0)
			cases++;
			else
			{
				police--;
			}
		}
		else
		police+=t;
		
		
	}
	cout<<cases;
}
