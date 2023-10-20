#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int n, m ;
    scanf("%d%d", &n, &m) ;

    int lower_bound = (n+1)/2 ;
    cout<<lower_bound<<endl;
    int ans = (lower_bound+m-1)/m*m ;
    if(ans>n)
        ans = -1 ;

    printf("%d\n", ans) ;

    return 0 ;
}
