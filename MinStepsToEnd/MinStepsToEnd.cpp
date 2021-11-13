#include<iostream>
using namespace std;
int main() {
	int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
	int n = sizeof(arr) / sizeof(arr[0]);
	// for(int i = 1; i < n; i++) arr[i-1] = i;
	int jumps = 1;
	int steps = arr[0];
	int maxReach = arr[0];
	int i = 0;
	for (i = 1; i < n; i++) {
		if (i >= n - 1) cout << jumps;
		maxReach = max(maxReach, i + arr[i]);
		steps--;
		if (steps == 0) {
			jumps++;
			if (i > maxReach)
				return -1;
			steps = maxReach - i;
		}
	}
	return -1;
}