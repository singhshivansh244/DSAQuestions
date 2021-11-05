#include<iostream>
using namespace std;
#define INT_INF 1e6
int main(){
	int a[] = {0 ,2 ,1 ,2 ,0};
	int size = 5;
	int tempArr[size];
	int j = 3;
	int temp = 0, index = 0;
	while(j){
		for(int i = 0; i < size; i++){
			if(a[i] == temp) tempArr[index] = a[i], index++;
		}
		j--;
		temp++;
	}
	for(int i = 0; i < size; i++) a[i] = tempArr[i], cout<<a[i]<<" ";
	return 0;
}