#include <bits/stdc++.h>
using namespace std;
#define ll long long
int solve(vector<ll> &x)
{
    sort(x.begin(), x.end());
    int count = 0;
    ll max = 2 * x[0] - 1;
    for (int i = 1; i < x.size(); i++)
    {
        ll rem = x[i]-1;
        
        count+=(rem/max);
        
    }
    return count;
}
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
        vector<ll> v;
        for (int i = 0; i < n; i++)
        {
            ll element;
            cin >> element;
            v.push_back(element);
        }
        cout << solve(v)<<endl;
    }
    return 0;
}