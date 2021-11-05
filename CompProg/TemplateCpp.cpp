#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
template<typename T>
void ckmin(T &a, T b) { if (a > b) a = b; return;}
template<typename T>
void ckmax(T &a, T b) { if (a < b) a = b; return;}
template<typename T>
void __print(vector<T> x) { cout << "[ "; for (T i : x) { cout << i << " "; } cout << "]\n"; }
int SetBitCount(ll n) { int c = 0; while (n) { n = n & (n - 1); c++; } return c; }
template<typename T>
void _print(T x) { cout << x << "] "; }
#ifndef ONLINE_JUDGE
#define debug(x) cout << "[" << #x << "] = ["; _print(x)
#else
#define debug(x)
#endif
#define vll vector<ll>
#define vi vector<int>
bool sieve(ll n) {vector<bool> is_prime(n + 1, true); is_prime[0] = is_prime[1] = false; for (int i = 2; i <= n; i++) {if (is_prime[i] && (long long)i * i <= n) {for (int j = i * i; j <= n; j += i)is_prime[j] = false;}} return is_prime[n];}
#define fo(i,x,y) for(ll i = x; i < y; i++)
#define Rfo(i,x,y) for(ll i = x; i > y; i--)
#define INF 1000000000
#define Power2(n) (n && !(n&(n-1)))
#define max(a,b) (a < b ? b : a)
#define min(a,b) (a < b ? a : b)
#define sortA(a,n) sort(a,a+n)
#define ff first
#define MOD 1000000007
#define ss second
#define sortV(a) sort(a.begin(),a.end())
#define sZ(a) a.size()
#define checkBitSet(n,i) ((n&(1<<i)))
/*----------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/


void solve() {

}

int main() {
#ifndef ONLINE_JUDGE
    freopen("/Users/shivanshsingh/Desktop/450Questions/input1.txt", "r", stdin);
    freopen("/Users/shivanshsingh/Desktop/450Questions/output1.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    cout.precision(10);
    cout << fixed;
    int tc = 1;
    // cin >> tc;
    while (tc--) solve();
    return 0;
}