#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		char in[n][m];
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>in[i][j];
			}
		}
		bool res=false;
		for(int ii=0;ii<n;ii++)
		{
			bool v,i,k,a;
			v=i=k=a=false;
			for(int j=0;j<m;j++)
			{
//				cout<<in[ii][j]<<endl;
				if(in[ii][j]=='v' &&!i &&!k&&!a)
				v=true;
				else if(in[ii][j]=='i' &&!k&&!a) 
				i=true;
				else if(in[ii][j]=='k' &&!a)
				k=true;
				else if(in[ii][j]=='a')
				a=true;	
			}
//			cout<<v<<" "<<i<<" "<<k<<" "<<a<<endl;
			if(v&&i&&k&&a)
			{
				cout<<"Yes"<<endl;
				res=true;
				break;
			}
		}
		if(res==false)
		{
		for(int ii=0;ii<n;ii++)
		{
			bool v,i,k,a;
			v=i=k=a=false;
			for(int j=0;j<n;j++)
			{
				if(in[j][ii]=='v' &&!i &&!k&&!a)
				v=true;
				else if(in[j][ii]=='i' &&!k&&!a) 
				i=true;
				else if(in[j][ii]=='k' &&!a)
				k=true;
				else if(in[j][ii]=='a')
				a=true;	
			}
			if(v&&i&&k&&a)
			{
				cout<<"Yes"<<endl;
				res=true;
				break;
			}
		}
		if(res==false)
		cout<<"No"<<endl;
	}
		
	}
}
