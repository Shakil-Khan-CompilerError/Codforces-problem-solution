#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
long long dp[MAXN];

int main() {
    int n;
    cin >> n;

    int mx = 0;
    for(int i=0; i<n; i++) {
        int x;
        cin >> x;
        dp[x] += x;
        mx = max(mx, x);
    }

    dp[1] = max(dp[1], dp[0]);
    for(int i=2; i<=mx; i++) {
        dp[i] = max(dp[i-1], dp[i-2] + dp[i]);
    }

    cout << dp[mx] << endl;

    return 0;
}