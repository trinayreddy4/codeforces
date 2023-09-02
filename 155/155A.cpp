#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	int mini=INT_MAX,maxi=INT_MIN;
	int t;
	cin>>t;
	maxi=max(maxi,t);
	mini=min(mini,t);
	int ama=0;
	for(int i=1;i<n;i++)
	{
		cin>>t;	
		if(t>maxi||t<mini)
		ama++;
		maxi=max(maxi,t);
		mini=min(mini,t);
	}
	cout<<ama<<endl;
}
