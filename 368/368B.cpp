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
int main()
{
    fastread();
    int n,m;
    in>>n>>m;
    
    vi a(n);
    
    for(auto &i:a)
    in>>i;
    
    vi temp(n);
    
    int c=0;
    unordered_set<int>s;
    s.insert(a[n-1]);
    temp[n-1]=1;
    for(int i=n-2;i>=0;i--)
    {
    	if(s.find(a[i])==s.end())
    	{
    		c=1;	
			s.insert(a[i]);
		}
		else
		c=0;
		
		temp[i]=temp[i+1]+c;
	}
    
//    for(auto i:temp)
//    ou<<i<<" ";
//    
//    ou<<nl;
//    
    for(int i=0;i<m;i++)
    {
    	int t;
    	in>>t;
    	ou<<temp[t-1]<<nl;
	}
}



