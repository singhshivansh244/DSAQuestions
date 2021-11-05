#include<bits/stdc++.h>
using namespace std;

#define fo(i,x,y) for(int i = x; i < y; i++)

vector<int> graph[50];
bool visited[50];
int shortestPathLength[20];
void bfs(int root) {
    visited[root] = 1;
    queue<int> q;
    q.push(root);
    while (!q.empty()) {
        int p = q.front();
        q.pop();
        cout << p << ' ';
        for (int i = 0; i < graph[p].size(); i++) {
            if (!visited[graph[p][i]]) {
                visited[graph[p][i]] = 1;
                q.push(graph[p][i]);
            }
        }
    }
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
    int vertices;
    cin >> vertices;
    for (int i = 0; i < vertices; i++) {
        int first, second;
        cin >> first >> second;
        graph[first].push_back(second);
    }
    bfs(5);
}