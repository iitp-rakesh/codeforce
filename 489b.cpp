#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    int dp[105] = {0};
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        dp[a[i]]++;
    }
    cin >> m;
    int b[m];
    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(b, b + m);
    for (int i = 0; i < m; i++)
    {
        if (dp[b[i] - 1] > 0)
        {
            ans++;
            dp[b[i] - 1]--;
        }
        else if (dp[b[i]] > 0)
        {
            ans++;
            dp[b[i]]--;
        }
        else if (dp[b[i] + 1] > 0)
        {
            ans++;
            dp[b[i] + 1]--;
        }
    }
    cout << ans;
    return 0;
}