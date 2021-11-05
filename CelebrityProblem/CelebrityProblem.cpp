#include<bits/stdc++.h>
using namespace std;

int n, m;
int arr[20][20];

// by recursion
int potentiallyCelebrityChecker(stack<int> s) {
	if (s.size() < 2) return s.top();
	int i = s.top();
	s.pop();
	int j = s.top();
	s.pop();
	if (arr[i][j]) s.push(j);
	else s.push(i);
	return potentiallyCelebrityChecker(s);
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("/Users/shivanshsingh/Desktop/450Questions/input1.txt", "r", stdin);
	freopen("/Users/shivanshsingh/Desktop/450Questions/output1.txt", "w", stdout);
#endif
	cin >> n >> m;
	for (int i = 0 ; i < n; i++) {
		for (int j = 0; j < m; j++) cin >> arr[i][j];
	}
	stack<int> st;
	for (int i = 0; i < m; i++) st.push(i);
	int potentiallyCelebrity = potentiallyCelebrityChecker(st);
	// by looping
	// while (st.size() > 2) {
	// 	int i = st.top();//
	// 	st.pop();//
	// 	int j = st.top();//
	// 	st.pop();//
	// 	if (arr[i][j]) st.push(j);//
	// 	else st.push(i);//
	// }
	for (int i = 0; i < m; i++) {
		if (i != potentiallyCelebrity)
			if (arr[potentiallyCelebrity][i] == 1 || arr[i][potentiallyCelebrity] == 0) {
				cout << "-1";
				return 0;
			}
	}
	cout << potentiallyCelebrity << " is the Celebrity";
	return 0;
}