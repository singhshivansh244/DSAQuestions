#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i,x,y) for(ll i = x; i < y; i++)

struct Node {
	int data;
	Node *left, *right;
	Node(int n) {
		data = n;
		left = right = nullptr;
	}
};
/*
		10
	   /  \
	  14  24
	 /  \   \
	59  42  39
   /
 100
*/
void printHeight(Node* n) {
	if (n == nullptr) return;
	queue<Node*> q;
	q.push(n);
	while (!q.empty()) {
		Node* curr = q.front();
		q.pop();
		cout << curr->data << ' ';
		if (curr->left != nullptr)
			q.push(curr->left);
		if (curr->right != nullptr)
			q.push(curr->right);
	}
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("/Users/shivanshsingh/Desktop/450Questions/input1.txt", "r", stdin);
	freopen("/Users/shivanshsingh/Desktop/450Questions/output1.txt", "w", stdout);
#endif
	int tc = 1;
	cin >> tc;
	// while (tc--) solve();
	Node* root = new Node(10);
	root->left = new Node(14);
	root->right = new Node(24);
	root->left->left = new Node(59);
	root->left->left->left = new Node(100023001);
	root->left->right = new Node(412129);
	root->right->right = new Node(39);
	printHeight(root);
	return 0;
}