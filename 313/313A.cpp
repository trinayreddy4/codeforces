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
	string n;
	in>>n;
	
	if(stoi(n)>=0)
	{
		ou<<n<<nl;
	}
	else
	{
		int nc=stoi(n);
		
		int by_last_digit=nc/10;
		int last_digit=nc%10;
		
		string temp="";
		
		for(int i=0;i<n.length()-2;i++)
		{
			temp+=n[i];
		}
//		ou<<last_digit<<endl;
		temp=temp+(char)(abs(last_digit)+48);
//		ou<<temp<<endl;
		int tempo=stoi(temp);
//		ou<<tempo<<" "<<by_last_digit<<nl;
		ou<<max(tempo,by_last_digit);
	}
}


