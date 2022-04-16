#include <iostream>
#include <queue>
#include <vector>
using namespace std;
struct treeNode {
  int data;
  treeNode *left, *right;
  treeNode(int d) {
    data = d;
    left = right = nullptr;
  }
};

void printTree(treeNode *root) {
  queue<treeNode *> qNode;
  qNode.push(root);
  while (!qNode.empty()) {
    treeNode *front = qNode.front();
    qNode.pop();
    if(front != nullptr)
    cout << front->data << "->";
    if (front->left != nullptr) cout << front->left->data << ",";
    if (front->right != nullptr) cout << front->right->data;
    if (front->left != nullptr) qNode.push(front->left);
    if (front->right != nullptr) qNode.push(front->right);
    cout<<endl;
  }
}

treeNode *createTree() {
  cout << "Enter root ";
  int rootData;
  cin >> rootData;
  int left = 1, right = 1;
  treeNode *tmp = new treeNode(rootData);
  queue<treeNode *> qNode;
  qNode.push(tmp);
  while (!qNode.empty()) {
    treeNode *root = qNode.front();
    cout << "Here is the root->" << root->data << endl;
    qNode.pop();
    cout << "Enter left ";
    cin >> left;
    cout << "Enter right ";
    cin >> right;
    if (left != -1) {
      treeNode *leftNode = new treeNode(left);
      root->left = leftNode;
      qNode.push(leftNode);
    }
    if (right != -1) {
      treeNode *rightNode = new treeNode(right);
      root->right = rightNode;
      qNode.push(rightNode);
    }
  }
  return tmp;
}
