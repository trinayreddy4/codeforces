#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m[5][5];
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cin>>m[i][j];
		}
	}
	
	int ind=1;
	bool flag=false;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(m[i][j]==1)
			{
				flag=true;
				break;
			}
			else
			ind++;
		}
		if(flag)
		break;
	}
	if(ind<=13)
	cout<<abs(13-ind)<<endl;
	else
	cout<<ind-13<<endl;
}
