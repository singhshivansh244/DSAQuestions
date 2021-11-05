#include<bits/stdc++.h>
using namespace std;

#define fo(i,x,y) for(int i = x; i < y; i++)

int main() {
	int arr[] = {1, 2, 3 - 4, -3, 5, 9, 0};
	int n = sizeof(arr) / sizeof(arr[0]);
	int minVal = arr[0];
	int maxVal = arr[0];

	int maxProduct = arr[0];

	for (int i = 1; i < n; i++) {
		if (arr[i] < 0) swap(maxVal, minVal);
		maxVal = max(arr[i], maxVal * arr[i]);
		minVal = min(arr[i], minVal * arr[i]);
		maxProduct = max(maxProduct, maxVal);
	}
	cout << maxProduct << '\n';
	return 0;
}