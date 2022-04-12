#include "../template.h"
// O(N) and O(N)
//time and space resp
void solve(node* head, int left, int right) {
  node *start, *end;
  vi a;
  while (head->data != left) head = head->next;
  start = head;
  while (1) {
    a.pb(head->data);
    head = head->next;
    if (head->data == right) {
      a.pb(head->data);
      break;
    }
  }
  end = head;
  node* ptr = start;
  reverse(all(a));
  int i = 0;
  while (1) {
    ptr->data = a[i++];
    ptr = ptr->next;
    if (ptr == end) {
      ptr->data = a[i++];
      break;
    }
  }
}

int main() {
  head = nullptr;
  createList(5);
  createList(4);
  createList(3);
  createList(2);
  createList(1);
  printList(head);
  solve(head, 2, 4);
  cout << nl;
  printList(head);
}