#include<bits/stdc++.h>
using namespace std;
int main() {
	int arr[] = {1, 4, 3, 8, 5, 8, 9, 6};
	int n = sizeof(arr) / sizeof(arr[0]);
	set<int> s;
	for (int i = 0 ; i < n ; i++) s.insert(arr[i]);
	auto val = s.begin();
	int maxCount = INT_MIN, Count = 0;
	for (int i = *val ; i < 100010 ; i++) {
		if (s.find(i) == s.end())	maxCount = max(maxCount, Count), Count = 0;
		else Count++;
	}
	cout << maxCount << '\n';
	return 0;
}