// O(N) Time O(1) space
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[] = {7,1,5,3,6};
    int n = sizeof(a)/sizeof(a[0]);
    int min_ele = INT_MAX;
    int max_ele = INT_MIN;
    for(int i = 0; i < n; i++){
        min_ele = min(min_ele,a[i]);
        int cost = a[i] - min_ele;
        max_ele = max(max_ele,cost);
    }
    cout<<max_ele;
}