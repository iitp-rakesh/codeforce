#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> &a, int l, int r, int ans)
{
    l = find(a.begin(), a.end(), 1) - a.begin();
    // cout<<l<<" "<<r<<" "<<ans<<endl;
    if (l > r)
    {
        return ans;
    }
    if (a[r] == 0)
    {
        swap(a[l], a[r]);
        ans++;
    }
    return solve(a, l, --r, ans);
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
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int element;
            cin >> element;
            v.push_back(element);
        }

        cout << solve(v, 0, n - 1, 0) << endl;
    }
    return 0;
}