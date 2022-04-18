if (!vis[s][a[i][1]]) {
        vis[s][a[i][1]] = 1;
        cnt += solve(a, a[i][1], d);
      }