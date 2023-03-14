#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        map<long long, long long> mp;
        long long mx = 0, mn = 10e5 + 1;
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            mp[x]++;
            mx = max(mx, x);
            mn = min(mn, x);
        }
        // cout<<mn<<" "<<mx<<endl;
        long long ans;
        if (mx == mn)
        {ans=n*(n-1);
            cout << ans<< endl;}
        else
        {
            long long nas = mp[mx] * mp[mn] * 2;
            cout << nas << endl;
        }
    }
    return 0;
}