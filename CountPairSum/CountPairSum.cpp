#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main(){
	int arr[] = { 1,5,7,1};
	int n = sizeof(arr)/sizeof(arr[0]);
	int k = 6;
	int Count = 0;
	unordered_map<int,int> m;
	for(int i = 0; i < n; i++){
		int x = k - arr[i];
		if(m[x] == 0) m[arr[i]]++;
		else Count += m[x], m[arr[i]]++;
	}
	cout<<Count<<'\n';
	return 0;
}