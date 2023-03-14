#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    cin >> n;
    long long a[n], b[n];
    long long dp[n+2];
    dp[0]=0;dp[1]=a[0];
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
        dp[i+1]=dp[i]+a[i];
        b[i] = a[i];
    }
    sort(b, b + n);
    long long dpx[n+2];dpx[0]=0;
    for(int i=0;i<n;i++)
    {
        dpx[i+1]=dpx[i]+b[i];
    }
    long long k;
    cin >> k;
    for (long long i = 0; i < k; i++)
    {
        long long x, y, z;
        cin >> x >> y >> z;
        if (x == 1)
        {
            cout << dp[z ] - dp[y - 1] << endl;
        }
        else
        {
            cout << dpx[z ] - dpx[y - 1] << endl;
        }
    }

    return 0;
}