#include "../template.h"
// O(3N) == O(N) and O(1)
// Time and Space
void solve(int n, vi &a) {
  int index = 0, j = 0;
  while (j < 3) {
    fo(i, 0, n) {
      if (a[i] == j) swap(a[index++], a[i]);
    }
    j++;
  }
  __print(a);
}
int main() {
  int n = 10;
  vi a = {2, 1, 1, 1, 0, 1, 0, 2, 0, 1};
  solve(n, a);
}