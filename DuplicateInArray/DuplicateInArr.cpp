#include<iostream>
using namespace std;
int main(){
	int arr[] = {1,2,2,2,3,3,4,4,34,14,1,1,13,1};
	int n = sizeof(arr)/sizeof(arr[0]);
	for(int i = 0; i < n; i++) if(arr[i] != -1) cout<<arr[i]<<" ";
		cout<<'\n';
	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			if(arr[i]==arr[j]) arr[j] = INT_MIN;
		}
	}
	for(int i = 0; i < n; i++) if(arr[i] != INT_MIN) cout<<arr[i]<<" ";
	return 0;
}