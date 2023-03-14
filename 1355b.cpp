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
        cin>>n;
        int a[n],dp[n+1];
        dp[0]=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int ans=0;
        for (int i = 1; i <= n; i++)
        {
            dp[i]=dp[i-1]+1;
            if(dp[i]==a[i-1])
            {
                ans++;
                dp[i]=0;
            }
        }
        // for(int i=1;i<=n;i++)
        // {
        //     cout<<dp[i]<<" ";
        // }
        cout<<ans<<endl;
    }
    return 0;
}