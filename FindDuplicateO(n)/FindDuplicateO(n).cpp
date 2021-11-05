#include<bits/stdc++.h>
using namespace std;
#define fo(i,x,y) for(int i = x; i < y; i++)

int main() {
#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif

    vector<int> arr;
    int n;
    cin >> n;
    fo(i, 0, n) {
        int temp; cin >> temp;
        arr.push_back(temp);
    }
    fo(i, 0, n) {
        if (arr[abs(arr[i])] >= 0) {
            arr[abs(arr[i])] = -arr[abs(arr[i])];
        }
        else cout << abs(arr[i]) << ' ';
    }
    return 0;
}