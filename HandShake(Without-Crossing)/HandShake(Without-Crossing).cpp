#include <bits/stdc++.h>
using namespace std;

unsigned long int catalan[100] = {0};
int solve(int n) {
    unsigned int dp[1000] = {0};
    dp[0] = dp[1] = 1;
    for (int i = 2; i <= n; i++) {
        for (int j = 0; j < i; j++)
            dp[i] += dp[j] * dp[i - 1 - j];
    }
    return dp[n];
}

int main() {
    int n = 25;
    // cin >> n;
    cout << solve(n) << '\n';
    return 0;
}