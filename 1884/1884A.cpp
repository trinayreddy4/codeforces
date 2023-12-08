#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    
    while (t--) {
        int x, k;
        cin >> x >> k;
        int sum = 0;

        for (int i = x; ; i++) {
            int num = i;
            int digitsum = 0;
            while (num > 0) {
                digitsum += num % 10;
                num /= 10;
            }
            if (digitsum % k == 0) {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}
