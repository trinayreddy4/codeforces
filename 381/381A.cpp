#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	int first=0,last=n-1;
	int se=0,di=0;
	bool seturn=true,diturn=false;
	while(first<=last)
	{
		if(a[first]>a[last])
		{
			if(seturn)
			{
				seturn=false;
				diturn=true;
				se+=a[first];
			}
			else 
			{
				seturn=true;
				diturn=false;
				di+=a[first];
			}
			first++;
		}
		else
		{
			if(seturn)
			{
				
				seturn=false;
				diturn=true;
				se+=a[last];
			}
			else
			{
				
				seturn=true;
				diturn=false;
				di+=a[last];
			}
			last--;
		}
	}
	cout<<se<<" "<<di<<endl;
}

