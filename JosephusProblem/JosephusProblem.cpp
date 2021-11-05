#include <bits/stdc++.h>
#define lld long long int
#define ull unsigned long long
#define MOD 1000000007
#define MAX  1e9
typedef long long ll;
#define fo(i,x,y) for(int i = x; i < y; i++)
using namespace std;

ll dp[205][205];

ll safePos(int n, int k) {
    if (n == 1) return 0;
    return (safePos(n - 1, k) + k) % n;
}

void solve() {
    int n = 10, k = 2;
    cout << safePos(n, k) + 1 << '\n';
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}