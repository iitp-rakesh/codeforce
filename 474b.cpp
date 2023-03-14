#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

        int n;
        cin >> n;
        int a[n];
        int dp[n+1];
        dp[0]=0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            dp[i+1]=dp[i]+a[i];
        }
        int m;
        cin >> m;
        int b[m];
        for(int i=0;i<m;i++)cin >> b[i];
        for(int i=0;i<m;i++){
            int in=lower_bound(dp,dp+n+1,b[i])-dp;
            cout<<in<<endl;
        }
    return 0;
}