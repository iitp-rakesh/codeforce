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
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int dp[n+1];
        dp[0] = 0;
        for(int i=1;i<=n;i++){
            dp[i] = dp[i-1] + pow(-1,i-1)*a[i-1];
        }
        for(int i=0;i<=n;i++){
            cout<<dp[i]<<" ";
        }
        return 0;
    }
}