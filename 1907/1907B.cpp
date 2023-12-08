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
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		in>>s;
		stack<int> ru,rl;
		string ans="";
		set<int>se;
		// ARaBbbitBaby
		// 
		// 
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='b')
			{
					if(!rl.empty())
					{
						se.erase(rl.top());
						rl.pop();	
					}
//					if(rl)
//					for(int it=ans.length()-1;it>=0;it--)
//					{
//							if(ans[it]>=97&&ans[it]<=122)
//							{
//								ans.erase(it,1);
//								rl--;
//								break;
//							}
//					}	
			}
			else if(s[i]=='B')
			{
				
					if(!ru.empty())
					{
						se.erase(ru.top());
						ru.pop();	
					}
//					if(ru)
//					for(int it=ans.length()-1;it>=0;it--)
//					{
//							if(ans[it]>=65&&ans[it]<=90)
//							{
//								ans.erase(it,1);
//								break;
//							}
//					}	
			}
			else
			{
				if(s[i]>=65&&s[i]<=90)
				{
					ru.push(i);	
				}
				if(s[i]>=97&&s[i]<=122)
				{
					rl.push(i);
				}
				se.insert(i);	
//				ans+=s[i];
			}
		}
		for(auto i:se)
		{
			ans+=s[i];
		}
		ou<<ans<<nl;
	}
}



