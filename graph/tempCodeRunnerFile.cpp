vector<vector<bool>> vis(n + 1, vector<bool>(n + 1, 0));
  dfs(edge, vis, 1);
  cout << endl;
  bfs(edge, vis, 1);