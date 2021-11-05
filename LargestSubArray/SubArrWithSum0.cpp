#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

typedef long long ll;
#define fo(i, x, y) for (ll i = x; i < y; i++)

void solve()
{
	int arr[] = {-3, 2, 3, 1, 6 };
	int n = sizeof(arr) / sizeof(arr[0]);
	unordered_set<int> s;
	int sum = 0, pos;
	fo(i, 0, n)
	{
		sum += arr[i];
		if (sum == 0 || s.find(sum) != s.end() || arr[i] == 0)
		{
			pos = i;
			break;
		}
		s.insert(sum);
	}
	fo(i, 0, pos) cout << arr[i] << '+';
	cout << arr[pos] << "=\n";
	return;
}

int main()
{
	solve();
	return 1;
}