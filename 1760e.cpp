#include <bits/stdc++.h>
using namespace std;
int count_inversion(int a[], int n)
{
    int x = 0, y = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            x++;
        }
        else
        {
            y++;
            ans += x;
        }
    }
    return ans;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ans[2] = {0, 0};
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                a[i] = 1;
                ans[0] = count_inversion(a, n);
                a[i] = 0;
                break;
            }
        }

        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] == 1)
            {
                a[i] = 0;
                ans[1] = count_inversion(a, n);
                break;
            }
        }

        cout << max(ans[0], ans[1]) << endl;
    }
    return 0;
}
// 1 0 1 0 0 1 1 0 1 1 0 0