#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fo(i,x,y) for(ll i = x; i < y; i++)
#define vi vector<int>
#define s(x) sizeof(x)/sizeof(x[0]);
#define pair(x,y) pair<make_pair<int,int,(x,y)>>

struct emp {
    int id, age;
};

bool fun(emp a, emp b) {
    return a.id < b.id;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int arr[4][2] = {{1, 3}, {2, 4}, {5, 7}, {6, 8}};
    // int row = 4, col = 2;
    // fo(i, 0, row - 1) {
    //     if (arr[i][1] > arr[i + 1][0]) {

    //     }
    // }
    emp arr[] = {{1, 3}, {2, 4}};
    int n = s(arr);
    cout << n << '\n';
    fo(i, 0, n) cout << arr[i].id << ' ' << arr[i].age << '\n';
    sort(arr, arr + n, fun);
    fo(i, 0, n) cout << arr[i].id << ' ' << arr[i].age << '\n';
    return 0;
}

// // C++ program to merge overlapping Intervals in
// // O(n Log n) time and O(1) extra space.
// #include<bits/stdc++.h>
// using namespace std;

// // An Interval
// struct Interval
// {
//     int s, e;
// };

// // Function used in sort
// bool mycomp(Interval a, Interval b)
// { return a.s < b.s; }

// void mergeIntervals(Interval arr[], int n)
// {
//     // Sort Intervals in increasing order of
//     // start time
//     sort(arr, arr + n, mycomp);

//     int index = 0; // Stores index of last element
//     // in output array (modified arr[])

//     // Traverse all input Intervals
//     for (int i = 1; i < n; i++)
//     {
//         // If this is not first Interval and overlaps
//         // with the previous one
//         if (arr[index].e >= arr[i].s)
//         {
//             // Merge previous and current Intervals
//             arr[index].e = max(arr[index].e, arr[i].e);
//             arr[index].s = min(arr[index].s, arr[i].s);
//         }
//         else {
//             index++;
//             arr[index] = arr[i];
//         }
//     }

//     // Now arr[0..index-1] stores the merged Intervals
//     cout << "\n The Merged Intervals are: ";
//     for (int i = 0; i <= index; i++)
//         cout << "[" << arr[i].s << ", " << arr[i].e << "] ";
// }

// // Driver program
// int main()
// {
//     Interval arr[] = {{1, 3}, {2, 4}, {5, 7}, {6, 8}};;
//     int n = sizeof(arr) / sizeof(arr[0]);
//     mergeIntervals(arr, n);
//     return 0;
// }
