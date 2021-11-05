#include<iostream>
using namespace std;
int main(){
	int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
	int n = sizeof(arr)/sizeof(arr[0]);
	// for(int i = 1; i < n; i++) arr[i-1] = i;
	int size = 0;
    int steps = 0;
    while(size<n){            
    	size += arr[size];
    	cout<<size<<'\n';
        steps++;
   	}
   	cout<<steps;
	return 0;
}