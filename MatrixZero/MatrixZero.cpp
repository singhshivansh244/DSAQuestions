#include<bits/stdc++.h>
using namespace std;
#define fo(i,x,y) for(int i = x; i < y; i++)

struct node {
    int value = -1;
};

int main() {
#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif
    vector<vector<int>> matrix
    {
        {6, 6, 1, 9, 4, 8, 5},
        {0, 5, 6, 9, 0, 2, 9},
        {7, 6, 5, 9, 3, 1, 9},
        {5, 6, 8, 6, 9, 0, 5},
        {4, 6, 2, 0, 3, 5, 2}

    };
    int R = matrix.size();
    int C = matrix[0].size();
    bool isCol = false;
    for (int i = 0; i < R; i++) {
        if (matrix[i][0] == 0) {
            isCol = true;         //  marking for zero in first col
        }

        for (int j = 1; j < C; j++) {
            if (matrix[i][j] == 0) {
                matrix[0][j] = 0;    // marking ends at where zero was found for row
                matrix[i][0] = 0;    // marking ends at where zero was found for col
            }
        }
    }
    for (int i = 1; i < R; i++) {
        for (int j = 1; j < C; j++) {
            if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                matrix[i][j] = 0;    // marking zero for the required pattern
            }
        }
    }
    if (matrix[0][0] == 0) {
        for (int j = 0; j < C; j++) {
            matrix[0][j] = 0;      // checking if first ele is zero
        }
    }

    if (isCol) {
        for (int i = 0; i < R; i++) {
            matrix[i][0] = 0;    // than the maked value if was found before
        }
    }
    // printing matrix
    fo(i, 0, R) {
        int col = matrix[i].size();
        fo(j, 0, col) cout << matrix[i][j] << ' ';
        cout << '\n';
    }
    return 0;
}