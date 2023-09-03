#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>a(3);
	
	for(int i=0;i<a.size();i++)
	cin>>a[i];
	
	sort(a.begin(),a.end());
	int mid=a[1];
//	cout<<mid<<endl;
	int ans=abs(mid-a[0])+abs(a[2]-mid);
	cout<<ans<<endl;
}
