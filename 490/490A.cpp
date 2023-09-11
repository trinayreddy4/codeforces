#include <bits/stdc++.h>
#define pb push_back
using namespace std;

int index(int a[], int n, int x)
{
    for(int i=0; i<n; i++)
    {
        if(a[i] == x)
        {
            a[i] = 0;
            return i+1;
        }
    }
}


int main()
{
    int n;
    scanf("%d", &n);
    int t[n];
    map<int, int>frt;
    for(int i=0; i<n; i++)
    {

        scanf("%d", t+i);
        frt[t[i]]++;
    }

    int w = min(frt[1], min(frt[2], frt[3]));
    vector<int>ans;
    for(int i=0; i<w; i++)
    {
        ans.pb(index(t, n, 1));
        ans.pb(index(t, n, 2));
        ans.pb(index(t, n, 3));

    }

    printf("%d\n", w);
    for(int i=0;i<3*w; i++)
    {
        printf("%d%c", ans[i], (i+1)%3==0?'\n':' ');
    }
}

