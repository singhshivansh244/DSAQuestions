#include </Users/shivanshsingh/Desktop/GithubRep/template.h>

void helper(vvi &a, int i, int j, string temp, vector<string> &ans) {
  if (a[i][j] == 0) return;
  if (i == a.size() - 1 and j == a[0].size() - 1) {
    ans.pb(temp);
    return;
  }
  if (i == a.size() - 1) {
    helper(a, i, j + 1, temp + 'R', ans);
    return;
  }
  if (j == a[0].size() - 1) {
    helper(a, i + 1, j, temp + 'D', ans);
    return;
  }
  helper(a, i + 1, j, temp + 'D', ans);
  helper(a, i, j + 1, temp + 'R', ans);
}

void solve(vvi &a) {
  vector<string> ans;
  helper(a, 0, 0, "", ans);
  fo(i, 0, ans.size()) cout << ans[i] << " ";
  return;
}

int main() {
  vvi a = {{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};
  solve(a);
}