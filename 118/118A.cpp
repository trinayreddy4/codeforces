#include<bits/stdc++.h>
#define nl endl
#define ou cout
#define in cin
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define yes ou<<"YES"<<nl;
#define no ou<<"NO"<<nl;
using ll=long long;
using lli=long long int;
using namespace std;
typedef vector<int> vi;
typedef vector<float> vf;
typedef vector<string> vs;
int main()
{
    fastread();
	string s;
	in>>s;
	
	unordered_set<char>se;
	se.insert('A');
	se.insert('E');
	se.insert('I');
	se.insert('O');
	se.insert('U');
	se.insert('a');
	se.insert('e');
	se.insert('i');
	se.insert('o');
	se.insert('u');
	se.insert('y');
	se.insert('Y');
	string ans="";
	int n=s.length();
	for(int i=0;i<n;i++)
	{
		if(se.find(s[i])==se.end())
		{
			ans+=s[i];
		}
	}
//	ou<<ans<<nl;
//	ou<<s<<nl;
	for(int i=0;i<ans.length();i++)
	{
		if(ans[i]>=65&&ans[i]<=90)
		{
			ans[i]=ans[i]-'A'+'a';
		}
	}
//	ou<<ans<<nl;
	string temp="";
	int k=0;
	for(int i=0;i<ans.length()*2;i++)
	{
		if(i&1)
		{
			temp+=ans[k++];
		}
		else
		{
			temp+='.';
		}
	}
	ou<<temp<<nl;
}


