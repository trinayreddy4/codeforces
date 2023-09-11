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
	int t;
	cin>>t;
	while(t--)
	{
		int n,a[100];
	 int c = 0,flag = 0;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int odd = 0,even = 0;
        for(int i=0; i<n; i++){
            if(i%2 != a[i] % 2){
                if(a[i] % 2 == 1)odd++;
                else even++;
            }
        }
        if(odd != even){
            cout<<-1<<endl;
        }
        else{
            cout<<even<<endl;
        }
	}
}


