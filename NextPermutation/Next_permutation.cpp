// Special Problem O(n)Time and O(1)Space
#include<bits/stdc++.h>
using namespace std;
#define fo(i,x,y) for(int i = x; i < y; i++)
int main(){
    vector<int> a(3);
    a[0] = 1;
    a[1] = 1;
    a[2] = 3;
    int n = a.size();
    int pos_min = INT_MAX, pos_max = INT_MIN;
    for(int i = n-2; i > -1; i--){
    	if(a[i] < a[i+1]){
    		pos_min = i;
    		break;
    	}
    }
    if(pos_min != INT_MAX){
    	fo(i,pos_min+1,n){
    		if(a[i] == a[pos_min]+1){
    			pos_max = i;
    			break;
    		}
    	}
    	if(pos_max == INT_MIN){
    		swap(a[pos_min],a[pos_min+1]); 
    	}
    	else{
    		swap(a[pos_min],a[pos_max]);
    		reverse(a.begin()+pos_min+1,a.end());
    	}
    }
    else reverse(a.begin(),a.end());
    fo(i,0,3) cout<<a[i]<<' ';
}
/*
1 3 2
*/