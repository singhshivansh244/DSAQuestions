#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int arr[] = {0,1,1,1};
	int a[] = {4,6,7,8};
	int A[8];
	merge(arr,arr+4,a,a+4,A);
	for(int i = 0; i < 8; i++) cout<<A[i]<<" ";
	return 0;
}