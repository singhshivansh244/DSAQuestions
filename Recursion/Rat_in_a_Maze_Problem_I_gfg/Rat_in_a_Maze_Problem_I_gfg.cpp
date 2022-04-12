#include "../../template.h"

void helper(vvi &a, int i, int j, string temp, vector<string> &ans,
            vector<vector<bool>> vis) {
  print__2D(vis);
  cout << nl;
  if (a[i][j] == 0 or vis[i][j]) return;
  vis[i][j] = 1;
  if (i == a.size() - 1 and j == a[0].size() - 1) {
    ans.pb(temp);
    return;
  }
  if (i == 0 and j == a[0].size() - 1) {
    helper(a, i + 1, j, temp + 'D', ans, vis);
    return;
  }
  if (i == 0) {
    helper(a, i, j + 1, temp + 'R', ans, vis);
    return;
  }
  if (i == a.size() - 1) {
    helper(a, i, j + 1, temp + 'R', ans, vis);
    return;
  }
  if (j == a[0].size() - 1) {
    helper(a, i + 1, j, temp + 'D', ans, vis);
    return;
  }
  helper(a, i + 1, j, temp + 'D', ans, vis);
  helper(a, i - 1, j, temp + 'R', ans, vis);
  helper(a, i, j + 1, temp + 'R', ans, vis);
}

void solve(vvi &a) {
  vector<string> ans;
  vector<vector<bool>> vis(a.size(), vector<bool>(a[0].size(), 0));
  helper(a, 0, 0, "", ans, vis);
  fo(i, 0, ans.size()) cout << ans[i] << " ";
  return;
}

int main() {
  vvi a = {{1, 1, 1, 1, 1}, {1, 1, 1, 1, 1}, {1, 1, 1, 1, 1}, {1, 1, 1, 1, 1}};
  // print__2D(a);
  solve(a);
}