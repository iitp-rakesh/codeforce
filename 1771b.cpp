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
        int f,n;
        cin>>f>>n;
        int a[n][2];
        int dp[f+1]={0};
        for(int i=0;i<n;i++){
            cin>>a[i][0]>>a[i][1];
            dp[a[i][0]]++;
            dp[a[i][1]]++;
        }
        
        for(int i=1;i<=f;i++){
            cout<<dp[i]<<" ";
        }
cout<<endl;
    }
    return 0;
}