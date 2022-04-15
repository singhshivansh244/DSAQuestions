#include "../../template.h"
#define vvll vector<vector<ll>>
long long solveMemo(vi &a, int m, int n, vvll &dp) {
  if (n == 0) return 1;
  if (n < 0) return 0;
  if (m <= 0 and n >= 1) return 0;
  if (dp[n][m]) return dp[n][m];
  dp[n][m] = solveMemo(a, m - 1, n, dp) + solveMemo(a, m, n - a[m - 1], dp);
  return dp[n][m];
}

void solveTabu(vi &a, int t, int n) {
  vvll dp(n + 1, vll(t + 1, 0));
  fo(i, 0, t + 1) { dp[0][i] = (i % a[0] == 0); }
  fo(i, 1, t + 1) {
    fo(j, 0, t + 1) {
      long notTaken = dp[i - 1][j];
      long taken = 0;
      if (a[i] <= j) taken = dp[i][j - a[i]];
      dp[i][j] = taken + notTaken;
    }
  }
  cout << dp[n - 1][t];
}

int main() {
  int n = 7, m = 8;
  vi a = {1, 2, 3, 4, 7, 8, 9, 11};
  vvll dp(n + 1, vll(m + 1, 0));
  cout << "Memoization Solution-> " << solveMemo(a, m, n, dp) << nl;
  cout << "Tabulation Solution -> ";
  solveTabu(a, n, m);
}