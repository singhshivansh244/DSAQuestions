#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define Mod 1000000007

void DFS(int i, int n) {
    if (i > n) return;
    printf("%i ", i);
    for (int j = 0; j < 10; j ++) {
        DFS(10 * i + j, n);
    }
    return;
}
int main() {
    for (int i = 1; i < 10; i++) {
        DFS(i, 100);
        cout << '\n';
    }
    return 0;
}