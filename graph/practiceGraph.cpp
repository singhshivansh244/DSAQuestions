#include <iostream>
#include <vector>

#include "../template.h"

using namespace std;
int solve(vvi &a, int s, int d) {
  if (s == d) return 1;
  int cnt = 0;
  fo(i, 0, a.size()) {
    if (a[i][0] == s) {
      cout << s << "->" << a[s][1] << nl;
      cnt += solve(a, a[i][1], d);
    }
  }
  return cnt;
}

int main() {
#ifndef ShivanshCoder
  freopen("input.txt", "r", stdin);
#endif
  vvi a;
  fo(i, 0, 57) {
    int s, f;
    cin >> s >> f;
    a.push_back({s, f});
  }
  int s = 2, d = 7;
  cout << solve(a, s, d) << nl;
}