#include "../../template.h"

vector<vector<int>> dp;
int helper(vvi &a, int i, int j, int ans) {
  if (j >= a[0].size()) return ans;
  // if (dp[i][j]) return dp[i][j];
  if (i < 0 or i > a.size()-1) return -1;
  dp[i][j] = max(helper(a, i - 1, j + 1, ans + a[i - 1][j]),
                 max(helper(a, i + 1, j + 1, ans + a[i + 1][j]),
                     helper(a, i, j + 1, ans + a[i][j])));
  return dp[i][j];
}

void solve(vvi &a) {
  int ans = MIN;
  dp.resize(a.size(), vi(a[0].size(), 0));
  fo(i, 0, a.size()) { ans = max(ans, helper(a, i, 1, a[i][0])), cout << nl; }
  cout << ans << nl;
}

int main() {
  vvi a = {{22, 58, 69}, {67, 93, 56}, {11, 42, 29}, {73, 21, 19}, {84, 37, 98},
           {24, 15, 70}, {13, 26, 91}, {80, 56, 73}, {62, 70, 96}, {81, 5, 25}};
  print__2D(a);
  solve(a);
  print__2D(dp);
}