#include "../../template.h"

vector<vector<ll>> dp;
long long solve(vi &a, int m, int n) {
  if (n == 0) return 1;
  if (n < 0) return 0;
  if (m <= 0 and n >= 1) return 0;
  if (dp[n][m]) return dp[n][m];
  dp[n][m] = solve(a, m - 1, n) + solve(a, m, n - a[m - 1]);
  return dp[n][m];
}

int main() {
  int n = 4, m = 3;
  vi a = {1, 2, 3};
  dp.resize(n + 1, vector<ll>(m + 1, 0));
  cout << solve(a, m, n);
  print__2D(dp);
}