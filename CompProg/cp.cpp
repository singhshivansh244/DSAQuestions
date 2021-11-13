#include<bits/stdc++.h>
using namespace std;
using namespace chrono;
// #include "treeNode.h"

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define inp "/Users/shivanshsingh/Desktop/Desktop – Shivansh’s MacBook Air/450Questions/input1.txt"
#define out "/Users/shivanshsingh/Desktop/Desktop – Shivansh’s MacBook Air/450Questions/output1.txt"
#define inf 1e9
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define fo(i,x,y) for(ll i = x; i < y; i++)
#define Rfo(i,x,y) for(ll i = x; i > y; i--)
#define Power2(n) (n && !(n&(n-1)))
#define max(a,b) (a < b ? b : a)
#define min(a,b) (a < b ? a : b)
#define sortA(a,n) sort(a,a+n)
#define sortV(a) sort(a.begin(),a.end())
#define sZ(a) a.size()
#define checkBitSet(n,i) ((n&(1<<i)))
#define Vfo(i,a) for(auto i = a.begin(); i != a.end(); i++)
#define vll vector<ll>
#define vi vector<int>


#ifndef ONLINE_JUDGE
#define debug(x) cout << #x <<" "; _print(x); cout << endl;
#else
#define debug(x);
#endif
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
template<typename T> void ckmin(T &a, T b) { if (a > b) a = b; return;}
template<typename T> void ckmax(T &a, T b) { if (a < b) a = b; return;}
template<typename T> void __print(vector<T> x) { cout << "[ "; for (T i : x) { cout << i << " "; } cout << "]\n"; }
int SetBitCount(ll n) { int c = 0; while (n) { n = n & (n - 1); c++; } return c; }
void timer() { auto stop1 = high_resolution_clock::now(); auto start1 = high_resolution_clock::now(); auto duration = duration_cast<microseconds>(stop1 - start1); cout << "\nTime: " << duration.count() << "ms" << endl << "Time: " << duration.count() / 1000 << "s\n";}
void _print(ll t) {cout << t;}
void _print(int t) {cout << t;}
void _print(string t) {cout << t;}
void _print(char t) {cout << t;}
void _print(lld t) {cout << t;}
void _print(double t) {cout << t;}
void _print(ull t) {cout << t;}
bool sieve(ll n) {vector<bool> is_prime(n + 1, true); is_prime[0] = is_prime[1] = false; for (int i = 2; i <= n; i++) {if (is_prime[i] && (long long)i * i <= n) {for (int j = i * i; j <= n; j += i)is_prime[j] = false;}} return is_prime[n];}

template<typename T>
T abs(T a, T b) {if (a - b < 0) return (-(a - b)); return (a - b); }
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cout << "{"; _print(p.ff); cout << ","; _print(p.ss); cout << "}";}
template <class T> void _print(vector <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
template <class T> void _print(set <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
template <class T> void _print(multiset <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
template <class T, class V> void _print(map <T, V> v) {cout << "[ "; for (auto i : v) {_print(i); cout << " ";} cout << "]";}

/*---------------------------------------------------------------------------------------------------------------------------*/
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
void extendgcd(ll a, ll b, ll*v) {if (b == 0) {v[0] = 1; v[1] = 0; v[2] = a; return ;} extendgcd(b, a % b, v); ll x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} //pass an arry of size1 3
ll mminv(ll a, ll b) {ll arr[3]; extendgcd(a, b, arr); return arr[0];} //for non prime b
ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}
bool isPalindrome(int n) {int divisor = 1; while (n / divisor >= 10)divisor *= 10; while (n != 0) {int leading = n / divisor; int trailing = n % 10; if (leading != trailing) return false; n = (n % divisor) / 10; divisor = divisor / 100;} return true;}
bool revsort(ll a, ll b) {return a > b;}
ll fact(ll n) {ll ans = 1; fo(i, 2, n + 1) ans *= i; return ans;}
void swap(int &x, int &y) {int temp = x; x = y; y = temp;}
ll combination(ll n, ll r, ll m, ll *fact, ll *ifact) {ll val1 = fact[n]; ll val2 = ifact[n - r]; ll val3 = ifact[r]; return (((val1 * val2) % m) * val3) % m;}
void google(int t) {cout << "Case #" << t << ": ";}
vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m
ll phin(ll n) {ll number = n; if (n % 2 == 0) {number /= 2; while (n % 2 == 0) n /= 2;} for (ll i = 3; i <= sqrt(n); i += 2) {if (n % i == 0) {while (n % i == 0)n /= i; number = (number / i * (i - 1));}} if (n > 1)number = (number / n * (n - 1)) ; return number;} //O(sqrt(N))
bool myfunction (int i, int j) {return (i == j);}
template<typename T> T Unique(T myvector) { string::iterator it; it = unique(myvector.begin(), myvector.end()); myvector.resize( std::distance(myvector.begin(), it) ); unique (myvector.begin(), myvector.end(), myfunction); return myvector;}
void precision(int a) {cout << setprecision(a) << fixed;}
void D2print(vector<vector<ll> > a) { fo(i, 0, a.size()) { fo(j, 0, a[0].size()) cout << setw(3) << a[i][j] << ' '; cout << nline;}}
#define all(a) a.begin(),a.end()
using vmn = vector<ll>;
#define vmmn(x,a,b) vector<vector<ll> > x(a,vmn(b))
/*--------------------------------------------------------------------------------------------------------------------------*/

// treeNode<int>* takeInput() {
//     cout << "Enter root Data " << nline;
//     queue<treeNode<int>*> q;
//     int childData;
//     cin >> childData;
//     treeNode<int>* root = new treeNode<int>(childData);
//     q.push(root);
//     int n;
//     while (!q.empty()) {
//         treeNode<int>* front = q.front();
//         q.pop();
//         cout << "Enter number of children of " << front->data << nline;
//         cin >> n;
//         fo(i, 0, n) {
//             cout << "Enter " << i << " data ";
//             cin >> childData;
//             treeNode<int>* child = new treeNode<int>(childData);
//             q.push(child);
//             cout << ' ';
//             front->child.pb(child);
//         }
//         q.pop();
//     }
//     return root;
// }
// void display(treeNode<int>* root) {
//     cout << root->data << " : ";
//     for (int i = 0; i < root->child.size(); i++) {
//         cout << root->child[i]->data << ' ';
//     }
//     cout << nline;
//     for (int i = 0; i < root->child.size(); i++) display(root->child[i]);
// }

// int ans = 1, mx = 0;
// int sumNode(treeNode<int>* root) {
//     mx = max(ans, mx);
//     ans++;
//     fo(i, 0, root->child.size()) {
//         sumNode(root->child[i]);
//     }
//     return mx;
// }


// void printLevelWise(treeNode<int>* root, int k) {
//     if (k == 0) {
//         cout << root->data << " ";
//         return;
//     }
//     fo(i, 0, root->child.size()) printLevelWise(root->child[i], k - 1);
//     return;
// }

// int dp(vi a, int n) {
//     vi dp(n);
//     dp[0] = 0;
//     int i = 0;
//     while (i < n) {
//         if (i + a[i] >= n - 1) {
//             dp[n - 1] = dp[i] + 1;
//             return dp[n - 1];
//         }
//         else dp[i + a[i]] = dp[i] + 1;
//         __print(dp);
//         i = i + a[i];
//     }
//     return dp[n - 1];
// }

void solve() {
    /*treeNode<int>* root = takeInput();
    display(root);
    printLevelWise(root, 2);
    */
    // this is the first problem of codechef
    // int n; cin >> n;
    // vi arr(n);
    // for (int& x : arr) cin >> x;
    // // __print(arr);
    // cout << dp(arr, n);
    // return;
    // this is petrol diesel price
    // int petrolPrice, dieselPrice, increasePetrol, increaseDiesel;
    // cin >> petrolPrice >> dieselPrice >> increasePetrol >> increaseDiesel;
    // int kMonth; cin >> kMonth;
    // dieselPrice = increaseDiesel * kMonth; petrolPrice = increasePetrol * kMonth;
    // debug(dieselPrice) debug(petrolPrice)
    // if (dieselPrice == petrolPrice) {
    //     cout << "SAME PRICE" << nline;
    //     return;
    // }
    // cout << (dieselPrice < petrolPrice ? "DIESEL" : "PETROL") << nline;
    // return;
    // this is Equal coin problem

    // int oneCoin, twoCoin;
    // cin >> oneCoin >> twoCoin;
    // cout << (oneCoin + 2 * twoCoin & 1 ? "nO" : "yEs") << nline;
    // return;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen(inp, "r", stdin);
    freopen(out, "w", stdout);
#endif
    fastio();
    int tc = 1;
    cin >> tc;
    while (tc--) solve();
    return 0;
}