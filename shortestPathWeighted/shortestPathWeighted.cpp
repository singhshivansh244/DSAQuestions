#include<bits/stdc++.h>
using namespace std;
#define fo(i,x,y) for(int i = x; i < y; i++)

vector<int> graph[50];
bool visited[50];
int Count = 0;
int shortestPath[20];
int indegree[20];
int vertices;
int Weight[50][50];
int dis[10];
/*
6
0 1 3
0 2 4
1 3 4
2 3 5
3 4 6
3 5 1
*/
int bfs() {
    queue<int> q;
    fo(i, 0, 10) dis[i] = INT_MAX;
    int Max = INT_MIN;
    fo(i, 0, vertices) if (!indegree[i]) q.push(i);
    fo(i, 0, vertices) if (Max < indegree[i]) Max = indegree[i];
    fo(i, 0, Max + 1) {
        fo(j, 0, vertices) {
            indegree[j]--;
            if (!indegree[j])
                q.push(j);
        }
    }
    dis[q.front()] = 0;
    while (!q.empty()) {
        int p = q.front();
        q.pop();
        for (auto x : graph[p]) {
            if (dis[x] > dis[p] + Weight[p][x]) {
                dis[x] = dis[p] + Weight[p][x];
            }
        }
    }
    fo(i, 0, vertices) cout << dis[i] << ' ';
    return 1;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("/Users/shivanshsingh/Desktop/450Questions/input1.txt", "r", stdin);
    freopen("/Users/shivanshsingh/Desktop/450Questions/output1.txt", "w", stdout);
#endif
    fo(i, 0, 50) visited[i] = 0;
    cin >> vertices;
    for (int i = 0; i < vertices; i++) {
        int first, second, weight;
        cin >> first >> second >> weight;
        graph[first].push_back(second);
        Weight[first][second] = weight;
    }
    fo(i, 0, vertices) indegree[i] = 0;
    fo(i, 0, vertices) for (auto x : graph[i]) indegree[x]++;
    bfs(), cout << '\n';
    return 0;
}