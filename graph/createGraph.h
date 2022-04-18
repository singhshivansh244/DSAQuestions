#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void dfs(vector<vector<int>> &a, vector<vector<bool>> vis, int s) {
  for (int i = 0; i < a[s].size(); i++) {
    if (!vis[s][a[s][i]]) {
      vis[s][a[s][i]] = 1;
      vis[a[s][i]][s] = 1;
      cout << s << "->" << a[s][i] << endl;
      dfs(a, vis, a[s][i]);
    }
  }
}

void bfs(vector<vector<int>> &a, vector<vector<bool>> vis, int s) {
  queue<int> qEdge;
  qEdge.push(s);
  while (!qEdge.empty()) {
    int front = qEdge.front();
    qEdge.pop();
    cout << front << "->";
    for (int i = 0; i < a[front].size(); i++) {
      if (!vis[front][a[front][i]]) {
        cout << a[front][i] << ",";
        qEdge.push(a[front][i]);
        vis[front][a[front][i]] = 1;
        vis[a[front][i]][front] = 1;
      }
    }
    cout << endl;
  }
}

void createGraph(int n, vector<vector<int>> &edge) {
  for (int i = 0; i < n; i++) {
    int s, f;
    cin >> s >> f;
    edge[s].push_back(f);
    edge[f].push_back(s);
  }
  vector<vector<bool>> vis(n + 1);
}