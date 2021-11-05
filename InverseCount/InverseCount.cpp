// O(NlogN)Time and O(N) space
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll merge(int arr[], int l, int mid, int r){
    ll ivr = 0;
    int temp[r];
    int i = l, j = mid, k = l;
    while(i<=mid-1 and j<=r){
        if(arr[i] <= arr[j]){
            temp[k++] = arr[i++];
        }
        else{
            temp[k++] = arr[j++];
            ivr += mid - i;
        }
    }
    while(i<=mid-1) temp[k++] = arr[i++];
    while(j<=r) temp[k++] = arr[j++];
    for(int i = l; i <= r; i++) arr[i] = temp[i];
    return ivr;
}
ll mergeSort(int a[], int l, int r){
    ll inr = 0;
    if(l < r){
        int mid = (l+r)/2;
        inr = mergeSort(a,l,mid);
        inr = mergeSort(a,mid+1,r);
        inr = merge(a,l,mid+1,r);
    }
    return inr;
}
int main(){
    int a[] = {2,4,1,3,5};
    ll n = sizeof(a)/sizeof(a[0]);
    ll ivr = mergeSort(a,0,n-1);
    cout<<ivr;
    return 0;
}
// 2 4 1 3 5
// Inversion Count
// 2 1
// 4 1
// 4 3
