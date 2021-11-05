#include<bits/stdc++.h>
using namespace std;
#define fo(i,x,y) for(int i = x; i < y; i++)

vector<int> graph[50];
bool visited[50];
int Count = 0;
int shortestPath[20];
int indegree[20];
/*
                    0   1
                   / \ / \
                  2---3   4
*/
void bfs() {
    int Max = INT_MIN;
    fo(i, 0, 6) if (Max < indegree[i]) Max = indegree[i];
    queue<int> q;
    fo(i, 0, Max + 1) {
        fo(i, 0, 6) {
            if (!indegree[i]) q.push(i);
            indegree[i]--;
        }
    }
    while (!q.empty()) cout << q.front() << ' ', q.pop();
    return;
}

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
    fo(i, 0, vertices) indegree[i] = 0;
    fo(i, 0, vertices) for (auto x : graph[i]) indegree[x]++;
    bfs(), cout << '\n';

    return 0;
}
