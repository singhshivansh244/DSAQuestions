#include<bits/stdc++.h>
#include <vector>
using namespace std;
// 6
// 1 1 1 10 10 10
// 1 9

#define fo(i,x,y) for(int i = x; i < y; i++)

double pow(double x, long long n) {
    if (n == 0) return 1;
    if ((n % 2))
        return x * pow(x * x, (n - 1) / 2);
    else
        return pow(x * x, n / 2);
}
double Mpow(double x, long long  n) {
    if (n == 0) return 1;
    if ((n % 2))
        return x * pow(x * x, (n - 1) / 2);
    else
        return pow(x * x, n / 2);
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif
    double x;
    long long n;
    cin >> x >> n;
    if (n == 1) return 1;
    if (n > 0) {
        cout << pow(x, n);
    }
    else if (n < 0)
        cout << 1 / Mpow(x, -n);
    return 0;
}