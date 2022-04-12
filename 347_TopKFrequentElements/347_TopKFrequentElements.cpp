#include "template.h"
// O(N) and O(1)
// time and space resp
void solve(vector<int> &a, int k)
{
  map<int, int> mp;
  int n = a.size();
  for (int i = 0; i < n; i++)
    mp[a[i]]++;
  vector<int> freq;
  for (auto [k, v] : mp)
  {
    freq.push_back(v);
  }
  sort(freq.begin(), freq.end(), greater<int>());
  vector<int> ans;
  int pos = 0;
  while (k--)
  {
    for (int i = 0; i < n; i++)
    {
      if (mp[a[i]] == freq[pos] and find(ans.begin(), ans.end(), a[i]) == ans.end())
      {
        pos++;
        ans.push_back(a[i]);
        break;
      }
    }
  }
  for (int i = 0; i < ans.size(); i++)
    cout << ans[i] << " ";
  return;
}

int main()
{
  int n;
  cin >> n;
  vi a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  int k;
  cin >> k;
  solve(a, k);
  return 0;
}
