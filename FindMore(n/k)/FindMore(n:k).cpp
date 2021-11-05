#include<bits/stdc++.h>
#include <unordered_set>
using namespace std;

#define fo(i,x,y) for(int i = x; i < y; i++)

int main() {
	int arr[] = {1, 2, 3, 5, 5, 5, 4, 2, 2};
	int n = sizeof(arr) / sizeof(arr[0]);
	int k = 3;
	map<int, int> m;
	fo(i, 0, n) m[i] = count(arr, arr + n, arr[i]);
	// fo(i, 0, n) cout << m[i] << ' ';
	int val = (n / k);
	set<int> s;
	fo(i, 0, n) if (m[i] >= val) s.insert(arr[i]);
	for (auto i = s.begin(); i != s.end(); i++) cout << *i << ' ';
	cout << '\n';
	return 0;
}