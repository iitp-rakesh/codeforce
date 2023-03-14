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
        int a[n][n - 1];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cin >> a[i][j];
            }
        }
        int ans[n];
        map<int, int> mp;
        for (int j = 0; j < n; j++)
        {
            mp[a[j][0]]++;
        }
        int x=0;
        for(auto i:mp){
            if(i.second>x){
                ans[0]=i.first;
                x=i.second;
            }
        }
        int i;
        for(int j = 0; j < n; j++){
            if(ans[0]!=a[j][0]){
                i=j;
                break;
            }
        }
        cout<<ans[0]<<" ";
        for(int j=0;j<n-1;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}