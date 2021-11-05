#include<bits/stdc++.h>
using namespace std;

#define fo(i,x,y) for(int i = x; i < y; i++)

vector<int> graph[50];
bool visited[50];
int Count = 0;
void dfs(int n) {
    if (visited[n]) return;
    visited[n] = true;
    cout << n << ' ';
    for (int i = 0; i < graph[n].size(); i++) {
        if (!visited[graph[n][i]])
            dfs(graph[n][i]);
    }
    return;
}
/*
                    5
                   /
                  6
                 / \
                4   0
               /     \
              1       2
             /
            3
*/
int main() {
#ifndef ONLINE_JUDGE
    freopen("/Users/shivanshsingh/Desktop/450Questions/input1.txt", "r", stdin);
    freopen("/Users/shivanshsingh/Desktop/450Questions/output1.txt", "w", stdout);
#endif
    fo(i, 0, 50) visited[i] = 0;
    int vertices;
    cin >> vertices;
    for (int i = 0; i < vertices; i++) {
        int first, second;
        cin >> first >> second;
        graph[first].push_back(second);
    }
    dfs(5);
    return 0;
}
