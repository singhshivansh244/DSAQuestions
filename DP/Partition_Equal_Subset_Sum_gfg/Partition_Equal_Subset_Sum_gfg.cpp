#include "../../template.h"

int solveMemo(int n, vi &a) {
  if (n == 0) return 0;
  return 1;
}

int main() {
  vi a;
  int n = 4;
  cout << "Memoization Solution-> ";
  cout << solveMemo(n, a) << nl;
}