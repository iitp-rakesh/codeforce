#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int i = n - 1, ans = 1;
        while (i > 0 && a[i] <= a[i - 1])
        {

            --i;
        }
        // cout << ans << endl;
        while (i > 0 && a[i] >= a[i - 1])
        {

            --i;
        }

        cout << i << endl;
    }
    return 0;
}