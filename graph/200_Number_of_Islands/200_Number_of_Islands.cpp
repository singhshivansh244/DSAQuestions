#include "../template.h"

int dfs(vvi &a, int i, int j) {
  if (i >= a.size() or i < 0 or j >= a[0].size() or j < 0 or a[i][j] == 0)
    return 0;
  a[i][j] = 0;
  dfs(a, i + 1, j);
  dfs(a, i - 1, j);
  dfs(a, i, j - 1);
  dfs(a, i, j + 1);
  return 1;
}

void solve(vvi &a) {
  int cnt = 0;
  fo(i, 0, a.size()) {
    fo(j, 0, a[0].size()) {
      if (a[i][j] == 1) cnt += dfs(a, i, j);
    }
  }
  cout << cnt << nl;
}

int main() {
  vvi a = {{0, 0, 0, 0, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0},
           {0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0},
           {0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0}};
  solve(a);
}