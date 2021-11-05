#include<bits/stdc++.h>
#include <vector>
using namespace std;
// 6
// 1 1 1 10 10 10
// 1 9

#define fo(i,x,y) for(int i = x; i < y; i++)
typedef long long ll;

void solve() {
    int n;
    cin >> n;
    vector<int> arr;
    fo(i, 0, n) {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    int Count = 0;
    int candidate = arr[0];
    for (auto num : arr) {
        if (Count == 0) candidate = num;
        if (candidate == num) Count++;
        else Count--;
    }
    cout << candidate;
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif
    int tc = 1;
    // cin>>tc;
    while (tc--) solve();
    return 0;
}