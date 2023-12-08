#include<bits/stdc++.h>
#define nl endl
#define ou cout
#define in cin
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define yes ou<<"YES"<<nl;
#define no ou<<"NO"<<nl;
#define all(arr) arr.begin(),arr.end()
using ll=long long;
using lli=long long int;
using namespace std;
typedef vector<int> vi;
typedef vector<float> vf;
typedef vector<string> vs;
bool func1(string n)
{
	for(int i=0;i<n.length();i++)
    {
    	if(n[i]=='4'||n[i]=='7')
    	{
    	
		}
		else
		{
			return false;
		}
	}
	
	return true;
}
int main()
{
    fastread();
    string n;
    in>>n;
    
    int ne=stoi(n);
//    ou<<func1(n)<<nl;
    if(func1(n))
    {
    	yes
    	return 0;
	}
    
    for(int i=1;i<=ne;i++)
    {
    	string t;
    	t=to_string(i);
    	
    	if(func1(t))
    	{
    		if(ne%i==0)
    		{
    			yes
    			return 0;
			}
		}
	}
    no
}



