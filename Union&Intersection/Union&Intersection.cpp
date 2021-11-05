#include<iostream>
using namespace std;
int main(){
	int arr1[] = {1,2,3,4,5};
	int size1 = sizeof(arr1)/sizeof(arr1[0]);
	int arr2[3] = {1,2,3};
	int size2 = sizeof(arr2)/sizeof(arr2[0]);
	for(int i = 0; i < size1; i++) cout<<*arr1<<" "<<'\n';
	for(int i = 0; i < size1-1; i++){
		for(int j = i+1; j < size1; j++){
			if(arr1[i] == arr1[j]) arr1[j] = -1;
		}
	}
	for(int i = 0; i < size1; i++) cout<<arr1<<" ";
	for(int i = 0; i < size2-1; i++){
		for(int j = i+1; j < size2; j++){
			if(arr2[i] == arr2[j]) arr2[j] = -1;
		}
	}
	for(int i = 0; i < size1-1; i++){
		for(int j = i+1; j < size2; j++){
			if(arr1[i] == arr2[j]) arr2[j] = -1;
		}
	}
	for(int i = 0; i < size1; i++) if(arr1[1] != -1)cout<<*arr1<<" ";
	for(int i = 0; i < size2; i++) if(arr2[1] != -1)cout<<*arr2<<" ";
	return 0;
}