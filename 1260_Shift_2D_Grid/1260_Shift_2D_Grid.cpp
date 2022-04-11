#include "../template.h"

vvi solve(vvi a, int k)
{
    vvi tmp = a;
    int n = a.size(), m = a[0].size();
    k = k % (n * m);
    while (k--)
    {
        fo(i, 0, n)
        {
            int first;
            fo(j, 0, m)
            {
                if (i == 0 and j == 0)
                    first = a[n - 1][m - 1];
                if (i == 0 and j == 0)
                {
                    tmp[i][j] = first;
                }
                else if (j == 0)
                {
                    tmp[i][j] = a[i - 1][m - 1];
                }
                else
                {
                    tmp[i][j] = a[i][j - 1];
                }
            }
        }
        a = tmp;
    }
    return tmp;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vvi a(n, vi(m, 0));
    fo(i, 0, n) fo(j, 0, m) cin >> a[i][j];
    int k;
    cin >> k;
    a = solve(a, k);
    print__2D(a);
}