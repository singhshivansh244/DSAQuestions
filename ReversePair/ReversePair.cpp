#include<bits/stdc++.h>
#include <vector>
using namespace std;
// 6
// 1 1 1 10 10 10
// 1 9

#define vi vector<int>
#define fo(i,x,y) for(int i = x; i < y; i++)
typedef long long ll;

int merge(vi &arr, int l, int mid, int r) {
    int i = l, j = mid + 1, k = 0, Count = 0;
    int Max = INT_MIN;
    vi temp(r - l + 1);
    int tempJ = j;
    for (int z = l; z <= mid; z++) {
        while (tempJ <= r && arr[z] > 2LL * arr[tempJ]) tempJ++;
        Count += tempJ - (mid + 1);
    }
    while (i <= mid && j <= r) {
        if (arr[i] <= arr[j]) temp[k++] = arr[i++];
        else temp[k++] = arr[j++];
    }
    while (i <= mid) temp[k++] = arr[i++];
    while (j <= r) temp[k++] = arr[j++];
    for (int i = l; i <= r; i++) arr[i] = temp[i - l];
    if (Max != INT_MIN)
        Count = Max;
    return Count;
}

int mergeSort(vi &arr, int l, int r) {
    if (l >= r) return 0;
    int mid = (l + r) / 2;
    int Count = 0;
    Count += mergeSort(arr, l, mid);
    Count += mergeSort(arr, mid + 1, r);
    Count += merge(arr, l , mid, r);
    return Count;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif
    // int tc = 1;
    // cin>>tc;
    int n;
    cin >> n;
    vi arr(n);
    for (int& a : arr) cin >> a;
    cout << mergeSort(arr, 0, n - 1);
    cout << "\nAfter sorting\n";
    for (auto a : arr) cout << a << ' ';
    return 0;
}