#include<bits/stdc++.h>
using namespace std;
#define fo(i,x,y) for(int i = x; i < y; i++)

struct interval {
	int r, l;
	bool flag = 0;
};

int main() {
// #ifndef ONLINE_JUDGE
// 	freopen("input1", "r", stdin);
// 	freopen("output1", "w", stdout);
// #endif
	int tc = 4;
	// cin >> tc;
	interval arr[] = {{6, 8}, {1, 9}, {2, 4}, {4, 7}};
	// fo(i, 0, tc) cin >> arr[i].r >> arr[i].l;
	fo(i, 0, tc) {
		if (arr[i].l > arr[i + 1].r) arr[i].l = arr[i + 1].l, arr[i].flag = 1;
	}
	fo(i, 0, tc - 1)
	if (arr[i].flag) cout << '[' << arr[i].r << ',' << arr[i].l << "] ";
	return 0;
}
/*

1 3
2 6
8 10
15 20

*/