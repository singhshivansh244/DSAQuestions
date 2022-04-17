#include <iostream>
#include <vector>

#include "../template.h"

using namespace std;

vi checkRemaining(vvi &a, int r, int c) {
  vi remaining;
  fo(i, 1, 9) remaining.pb(i);
  fo(i, r, r + 3) {
    fo(j, c, c + 3) {
      fo(t, 0, remaining.size()) {
        if (remaining[t] == a[i][j]) remaining.erase(remaining.begin() + t);
      }
    }
  }
  return remaining;
}

vi checkPossible(vvi &a, int r, int c, vi &rem) {
  vi getPossible;
  for (int val : rem) {
    bool flag = 0;
    fo(i, r, a.size()) {
      if (val == a[i][c]) {
        flag = 1;
        break;
      }
    }
    if (flag) continue;
    Rfo(i, r, -1) {
      if (val == a[i][c]) {
        flag = 1;
        break;
      }
    }
    if (flag) continue;
    fo(i, c, a[0].size()) {
      if (val == a[r][i]) {
        flag = 1;
        break;
      }
    }
    if (flag) continue;
    Rfo(i, c, -1) {
      if (val == a[r][i]) {
        flag = 1;
        break;
      }
    }
    if (flag) continue;
    getPossible.pb(val);
  }
  return getPossible;
}

bool helper(vvi &a, int r, int c) {
  vi rem = checkRemaining(a, r, c);
  fo(i, r, r + 3) {
    fo(j, c, c + 3) {
      if (a[i][j] == 0) {
        vi possible = checkPossible(a, i, j, rem);
        if (possible.size() == 0) return 0;
        for (int val : possible) {
          a[i][j] = val;
          if (helper(a, r, c)) return 1;
        }
      }
    }
  }
  return 1;
}

void solve(vvi &a) {
  int n = a.size(), m = a[0].size();
  for (int i = 0; i < n; i += 3) {
    for (int j = 0; j < m; j += 3) {
      helper(a, i, j);
    }
  }
}

int main() {
  vvi a = {{2, 9, 0, 8, 7, 3, 0, 1, 0}, {4, 0, 0, 0, 0, 5, 9, 2, 0},
           {0, 1, 0, 0, 2, 4, 0, 0, 0}, {0, 0, 0, 0, 8, 9, 6, 0, 0},
           {0, 0, 4, 0, 0, 0, 8, 3, 0}, {0, 8, 2, 3, 1, 0, 5, 0, 0},
           {0, 0, 9, 2, 3, 8, 0, 0, 7}, {8, 0, 0, 0, 4, 7, 0, 0, 0},
           {3, 0, 5, 0, 9, 0, 2, 8, 4}};
  solve(a);
  print__2D(a);
  cout << nl;
  vvi b = {{2, 9, 6, 8, 7, 3, 4, 1, 5}, {4, 3, 7, 1, 6, 5, 9, 2, 8},
           {5, 1, 8, 9, 2, 4, 7, 6, 3}, {1, 5, 3, 4, 8, 9, 6, 7, 2},
           {9, 6, 4, 7, 5, 2, 8, 3, 1}, {7, 8, 2, 3, 1, 6, 5, 4, 9},
           {6, 4, 9, 2, 3, 8, 1, 5, 7}, {8, 2, 1, 5, 4, 7, 3, 9, 6},
           {3, 7, 5, 6, 9, 1, 2, 8, 4}};
  print__2D(b);
  cout << nl;
  fo(i, 0, 9) {
    fo(j, 0, 9) {
      if (a[i][j] != b[i][j]) {
        debug(b[i][j]);
        return 0;
      }
    }
  }
}