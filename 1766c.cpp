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
        string a, b;
        cin >> a >> b;
        int dp[2][n];
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == 0)
                {
                    if (a[j] == 'B')
                    {
                        dp[i][j] = 1;
                    }
                    else
                        dp[i][j] = 0;
                }
                if (i == 1)
                {
                    if (b[j] == 'B')
                    {
                        dp[i][j] = 1;
                    }
                    else
                        dp[i][j] = 0;
                }
            }
        }
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << dp[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}