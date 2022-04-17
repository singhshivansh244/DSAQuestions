#include <bits/stdc++.h>
using namespace std;
vector<bool> vis(1001);
int fun(vector<vector<int>>& a, int s) {
  if (s == a.size()) return;
  int cnt = 0;
  for (int i = 0; i < a.size(); i++) {
    for (int j = 0; j < a[0].size(); j++) {
      if (a[i][j] == 1) {
        if (a[i - 1][j] == 0) {
          if (a[i + 1][j] == 0) {
            if (a[i][j - 1] == 0) {
              if (a[i][j + 1] == 0) {
                cnt++;
              } else
                fun(a, j);
            } else
              fun(a, j);
          } else
            fun(a, j);
        } else
          fun(a, j);
      }
    }
  }
  return cnt;
}

struct node {
  int data;
  node* next;
};

void fun1(node* pointer, int k) {
  int n = 0;
  node* head = new node();
  while (pointer != nullptr) {
    n++;
    pointer = pointer->next;
  }
  pointer = head;
  int cnt = 0;
  while (cnt != n - k) {
    pointer = pointer->next;
  }
  pointer->data = pointer->next->data;
  if (pointer->next->next != nullptr)
    pointer->next = pointer->next->next;
  else
    pointer->next = nullptr;
  // https:  // github.com/wreakhead
}