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
		string temp="1234567890";
		//1010
		int cnt=0,j=0,i=0;
		while(i<s.length())
		{
			if(s[i]==temp[j])
			{
				cnt++;
				i++;
			}
			else
			{
				auto it=find(temp.begin(),temp.end(),s[i]);
				if(j<it-temp.begin())
				{
					cnt+=it-temp.begin()-j;
				}
				else
				{
					cnt+=j-(it-temp.begin());
				}
				j=it-temp.begin();
			}
			
		}
		
		ou<<cnt<<nl;
	}
}



