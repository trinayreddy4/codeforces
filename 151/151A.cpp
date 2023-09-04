#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, k, l, c, d, p, nl,np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	// n friends k bottles l milliliters 
	//capacity c limes d slices p grams of salt
	int slices=c*d;
	int drink=k*l;
//	cout<<slices<<endl;
//	cout<<drink<<endl;
	int dm=drink/nl;
	int sm=slices;
	int sp=p/np;
	
	vector<int>a;
	a.push_back(dm);
	a.push_back(sm);
	a.push_back(sp);
	
	vector<int>::iterator it;
	it=min_element(a.begin(),a.end());
//	cout<<*it<<endl;
	cout<<*it/n<<endl;
}
