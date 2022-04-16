#include <iostream>
#include <queue>
#include <vector>
using namespace std;
struct genericTree {
  int data;
  std::vector<genericTree *> child;
  genericTree(int d) { data = d; }
};
void printGenericTree(genericTree *root) {
  queue<genericTree *> qNode;
  qNode.push(root);
  while (!qNode.empty()) {
    genericTree *front = qNode.front();
    qNode.pop();
    cout << front->data << "->";
    for (int i = 0; i < front->child.size(); i++) {
      cout << front->child[i]->data << ", ";
      qNode.push(front->child[i]);
    }
    cout<<endl;
  }
}

genericTree *createGenericTree() {
  cout << "Enter root ";
  int rootData;
  cin >> rootData;
  genericTree *root = new genericTree(rootData);
  queue<genericTree *> qNode;
  qNode.push(root);
  while (!qNode.empty()) {
    genericTree *front = qNode.front();
    qNode.pop();
    cout << "Enter Number of children for "<<front->data<<" ";
    int childrenCnt, getChild;
    cin >> childrenCnt;
    for (int i = 1; i <= childrenCnt; i++) {
      cout << "Enter " << i << " child ";
      cin >> getChild;
      genericTree *tempRoot = new genericTree(getChild);
      front->child.push_back(tempRoot);
      qNode.push(tempRoot);
    }
  }
  return root;
}