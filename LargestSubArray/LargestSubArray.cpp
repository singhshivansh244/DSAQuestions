#include<iostream>
using namespace std;
int main(){
	int a[] = {1,2,3,-2,-3,1,2,3,4,5,6,7,8,9,10};
	int n = sizeof(a)/sizeof(a[0]);
	int max_so_far = INT_MIN, max_ending_here = 0;
 
    for(int i = 0; i < n; i++){
    	max_ending_here = max_ending_here + a[i];
    	if(max_ending_here > max_so_far) max_so_far = max_ending_here;
    	if(max_ending_here < 0) max_ending_here = 0;
    }
    cout<<max_so_far;
	return 0;
}