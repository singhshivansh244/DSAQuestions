#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>

int func(int a[], int b[], int c[]){
    int n1 = 8,n2 = 7,n3 = 7;
    // n1 = sizeof(a)/sizeof(a[0]);
    // n2 = sizeof(b)/sizeof(b[0]);
    // n3 = sizeof(c)/sizeof(c[0]);
    sort(a,a+n1);
    sort(b,b+n2);
    sort(c,c+n3);
    int i = 0, j = 0;
    vi same;
	while(i < n1 && j < n2){
                if(a[i] == b[j]){ same.push_back(a[i]); i++,j++;}
                else if(a[i] < b[j]) i++;
                else j++;
            }
            i = 0, j = 0;
            int n = same.size();
            // int Max = max(n3,(max(n1,n2)));
            vi same3;
            while(i <= n && j <= n3){
                if(same[i] == c[j]){ same3.push_back(same[i]);j++,i++;}
                else if(same[i] < c[j]) i++;
                else j++;
            }
            set<int> s( same3.begin(), same3.end() );
            vi same1;
            same3.assign( s.begin(), s.end() );
            for(int i = 0; i < same3.size();i++) cout<<same3[i]<<" ";
            return 0;
}
int main(){
    int a[] = {1,2,3,4,7,8,8,8};
    int b[] = {2,4,6,9,8,8,8};
	int c[] = {2,4,5,6,8,8,8};
    func(a,b,c);
	
}