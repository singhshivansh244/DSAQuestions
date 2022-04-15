#include "../../template.h"

int solveMemo(vi &value, vi &weight, int n, int w, vvll &dp) {
  if (n == 0 or w == 0) return 0;
  if (weight[n - 1] > w) return solveMemo(value, weight, n - 1, w, dp);
  if (dp[n][w]) return dp[n][w];
  int op1 =
      value[n - 1] + solveMemo(value, weight, n - 1, w - weight[n - 1], dp);
  int op2 = solveMemo(value, weight, n - 1, w, dp);
  dp[n][w] = max(op1, op2);
  return dp[n][w];
}

int solveTabu(vi &val, vi &wt, int n, int W) {
  int i, w;
  vector<vector<int>> K(n + 1, vector<int>(W + 1));
  for (i = 0; i <= n; i++) {
    for (w = 0; w <= W; w++) {
      if (i == 0 || w == 0)
        K[i][w] = 0;
      else if (wt[i - 1] <= w)
        K[i][w] = max(val[i - 1] + K[i - 1][w - wt[i - 1]], K[i - 1][w]);
      else
        K[i][w] = K[i - 1][w];
    }
  }
  return K[n][W];
}

int main() {
  int n = 3, w = 4;
  vi value = {1, 2, 3}, weight = {4, 5, 1};
  int ans = 0;
  vvll dp(n + 1, vll(w + 1, 0));
  cout << "Memoization Solution-> ";
  cout << solveMemo(value, weight, n, w, dp) << nl;
  cout << "Tabulation Solution -> ";
  cout << solveTabu(value, weight, n, w);
}
