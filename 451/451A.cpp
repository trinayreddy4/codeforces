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
	  int m,n,a,b;
    cin>>m>>n;
    a=m*n;
    if(m>n){ b=a/m;} else b=a/n;

   // if(n==1){ cout<<"Akshat"; }
     if(b%2==0){
        cout<<"Malvika";
    }
    else
        cout<<"Akshat";
	return 0;
}



