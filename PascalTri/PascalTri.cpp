#include<bits/stdc++.h>
using namespace std;
#define fo(i,x,y) for(int i = x; i < y; i++)

struct node {
    int value = -1;
};

int main() {
// #ifndef ONLINE_JUDGE
//     freopen("input1.txt", "r", stdin);
//     freopen("output1.txt", "w", stdout);
// #endif
    int n = 10;
    //  O(n2) and O(n2)
    // int arr[10][10] = {};
    // fo(i, 0, 10) {
    //     fo(j, 0, i + 1) {
    //         if (j == 0) arr[i][j] = 1;
    //         else if (j + 1 == i + 1) arr[i][j] = 1;
    //         else {
    //             arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
    //         }
    //     }
    // }
    // fo(i, 0, 10) {
    //     fo(j, 0, 10)
    //     cout << arr[i][j] << ' ';
    //     cout << '\n';
    // }

    // O(n2) and O(1)
    for (int line = 1; line <= n; line++)
    {
        int C = 1; // used to represent C(line, i)
        for (int i = 1; i <= line; i++)
        {

            // The first value in a line is always 1
            cout << C << " ";
            C = C * (line - i) / i;
        }
        cout << "\n";
    }
    return 0;
}

