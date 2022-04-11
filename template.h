#include <bits/stdc++.h>
using namespace std;

// GCC Optimizations
#pragma GCC diagnostic ignored "-Wunused-variable" // Ignore unused variable warning
#pragma GCC diagnostic ignored "-Wunknown-pragmas" // Ignore unknown pragmas warning
#pragma GCC optimize("Ofast")
#pragma GCC target("fma,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
#pragma GCC optimize("unroll-loops")

#define nline '\n'
typedef long long ll;
typedef unsigned long long ull;
template <typename T>
#define yes cout << "Yes\n";
#define no cout << "No\n";
void print__2D(vector<vector<T>> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << "[";
        for (int j = 0; j < a[i].size(); j++)
        {
            cout << a[i][j] << " ";
        }
        cout << "]" << nline;
    }
}
long long gcd(long long int a, long long int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
long long int lcm(int a, int b) { return (a / gcd(a, b)) * b; }
template <typename T>
void ckmin(T &a, T b)
{
    if (a > b)
        a = b;
    return;
}
template <typename T>
void ckmax(T &a, T b)
{
    if (a < b)
        a = b;
    return;
}
template <typename T>
void __print(vector<T> x)
{
    cout << "[ ";
    for (T i : x)
    {
        cout << i << " ";
    }
    cout << "]\n";
}
int SetBitCount(ll n)
{
    int c = 0;
    while (n)
    {
        n = n & (n - 1);
        c++;
    }
    return c;
}
template <typename T>
void _print(T x) { cout << x << "] "; }
#ifndef ONLINE_JUDGE
#define debug(x)                   \
    \cout << "[" << #x << "] = ["; \
    \_print(x);                    \
    \cout << nline;
#else
#define debug(x)
#endif
#define I int
#define vll vector<ll>
#define vi vector<int>
vector<bool> sieve(ll n)
{
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= n; i++)
    {
        if (is_prime[i] && (long long)i * i <= n)
        {
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
    return is_prime;
}
#define fo(i, x, y) for (ll i = x; i < y; i++)
#define Rfo(i, x, y) for (ll i = x; i > y; i--)
#define INF 1000000000
#define Power2(n) (n && !(n & (n - 1)))
#define MAX INT_MAX
#define MIN INT_MIN
#define sortA(a, n) sort(a, a + n)
#define ff first
#define MOD 1000000007
#define all(a) a.begin(), a.end()
#define ss second
#define sortV(a) sort(a.begin(), a.end())
#define pb(a) push_back(a)
#define checkBitSet(n, i) ((n & (1 << i)))
ll max(ll a, ll b)
{
    return (a < b ? b : a);
}
constexpr ll SZ = 2e5 + 7;
#define vvi vector<vector<int>>

struct node
{
    int data;
    node *next;
};
node *start, *tmp, *head;

void createList(int data)
{
    node *ptr = new node();
    ptr->data = data;
    if (head == nullptr)
    {
        head = ptr;
        ptr->next = nullptr;
    }
    else
    {
        tmp = head;
        head = ptr;
        ptr->next = tmp;
    }
}

void printList(node *head)
{
    while (head != nullptr)
    {
        cout << head->data << "->";
        head = head->next;
    }
}