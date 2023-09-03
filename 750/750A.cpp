#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	
	//time left 240-k 
	int time_left=240-k;
	int cnt=0;
	for(int i=1;i<=n;i++)
	{
		int reqtime=i*5;
		if(reqtime<=time_left)
		{
			cnt++;
			time_left-=reqtime;
		}
		else
		{
			break;
		}
	}
	cout<<cnt<<endl;
	
}
