#include<iostream>
using namespace std;
int main(){
	int arr[] = {1,2,3,-2,-3,-5,12,4};
	int size = sizeof(arr)/sizeof(arr[0]);
	int a[size];
	int index = 0;
	for(int i = 0; i < size; i++) if(arr[i]<0) a[index] = arr[i], index++;
	for(int i = 0; i < size; i++) if(arr[i] >= 0)a[index] = arr[i], index++;
	for(int i = 0; i < size; i++) cout<<a[i]<<" ";
	return 0;
}