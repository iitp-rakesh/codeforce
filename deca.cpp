#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t, a, b;
    cin >> t >> a >> b;
    int x[b], y[a],ans[t+1];
    for (int i = 0; i < a; i++)
    {
        cin >> y[i];
        ans[y[i]]=1;
    }
    for(int i=0;i<b;i++){
        cin>>x[i];
        ans[x[i]]=2;
    }
    for(int i=1;i<=t;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}