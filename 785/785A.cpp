#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	string t="Tetrahedron";
	string cu="Cube";
	string o="Octahedron";
	string d="Dodecahedron";
	string i="Icosahedron";
	
	cin>>n;
	int c=0;
	for(int ic=0;ic<n;ic++)
	{
		string s;
		cin>>s;
		
		if(s==t)
		{
			c+=4;
		}
		else if(s==cu)
		{
			c+=6;
		}
		else if(s==o)
		{
			c+=8;
		}
		else if(s==d)
		{
			c+=12;
		}
		else if(s==i)
		{
			c+=20;
		}
	}
	cout<<c<<endl;
}
