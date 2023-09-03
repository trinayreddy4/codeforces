#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	//a red b blue
	int diff=min(a,b);
	int same=max(a,b)-diff;
	same=(same)/2;
	cout<<diff<<" "<<same<<endl;
}
