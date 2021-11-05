#include<bits/stdc++.h>
using namespace std;

#define fo(i,x,y) for(int i = x; i < y; i++)

vector<int> graph[50];
int mstDis[50];
bool finilized[10];
int Weight[50][50];
int vertices, edges;
int parent[10];
void dijkstra() {
	fo(i, 0, 50) mstDis[i] = INT_MAX;
	mstDis[1] = 0;
	fo(i, 1, edges) {
		if (!finilized[i]) {
			for (int j = 0; j < graph[i].size(); j++) {
				if (mstDis[graph[i][j]] > mstDis[i] + Weight[i][graph[i][j]])
					mstDis[graph[i][j]] = mstDis[i] + Weight[i][graph[i][j]], parent[graph[i][j]] = i;
			}
			finilized[i] = true;
		}
	}
	fo(i, 1, edges ) cout << mstDis[i] << ' ';
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("/Users/shivanshsingh/Desktop/450Questions/input1.txt", "r", stdin);
	freopen("/Users/shivanshsingh/Desktop/450Questions/output1.txt", "w", stdout);
#endif
	fo(i, 0, 50) finilized[i] = 0;
	cin >> vertices >> edges;
	for (int i = 0; i < vertices; i++) {
		int first, second, weight;
		cin >> first >> second >> weight;
		graph[first].push_back(second);
		Weight[first][second] = weight;
	}
	dijkstra();
	return 0;
}