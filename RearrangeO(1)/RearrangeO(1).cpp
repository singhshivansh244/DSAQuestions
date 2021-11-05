#include<iostream>
using namespace std;
int main(){
	int a[] = {-1,-2,-3,4,5,-7};
	int n = sizeof(a)/sizeof(a[0]);
	int pos = 0;
	int neg = 0;
	sort(a,a+n);
	for(int i = 0; i < n; i++){
		if(a[i] > 0){
			pos = i;
			break;
		} 
	}
	for(int i = 0; i < pos && pos+i<n; i+=2){
		int temp = a[i+1];
		a[i+1] = a[pos+i];
		a[pos+i] = temp;
	}
	for(int i = 0; i < n; i++) cout<<a[i]<<" ";
	return 0;
}
// -7 -3 -2 -1 4 5