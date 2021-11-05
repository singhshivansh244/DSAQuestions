#include<bits/stdc++.h>
using namespace std;
#define fo(i,x,y) for(int i = x; i < y; i++)

vector<int> graph[50];
bool visited[50];
int vertices, edges;
int Weight[10][10];
void primAlgo() {
    bool mSet[vertices];
    int key[vertices];
    int res = 0;
    fo(i, 0, vertices) key[i] = INT_MAX, mSet[i] = false;
    key[0] = 0;
    fo(Count, 0, edges) {
        int u = -1;
        fo(i, 0, edges) {
            if (!mSet[i] && (u == -1 || key[i] < key[u])) u = i;// 0 1 2
        }
        mSet[u] = true;// T T T
        res += key[u];// 0 5
        fo(v, 0, edges) {
            if (Weight[u][v] != 0 && !mSet[v]) key[v] = min(key[v], Weight[u][v]);//0 5 15
        }
    }
    cout << res;
}
/*
5 4
0 1 5
0 2 8
1 3 15
2 3 10
1 2 7
*/
int main() {
#ifndef ONLINE_JUDGE
    freopen("/Users/shivanshsingh/Desktop/450Questions/input1.txt", "r", stdin);
    freopen("/Users/shivanshsingh/Desktop/450Questions/output1.txt", "w", stdout);
#endif
    fo(i, 0, 50) visited[i] = 0;
    cin >> vertices >> edges;
    for (int i = 0; i < vertices; i++) {
        int first, second, weight;
        cin >> first >> second >> weight;
        graph[first].push_back(second);
        Weight[first][second] = weight;
    }
    primAlgo();
    return 0;
}
