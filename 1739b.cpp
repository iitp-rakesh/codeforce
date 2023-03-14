#include <bits/stdc++.h>
using namespace std;
int solve(int a[], int n, vector<int> &ans)
{
    ans.push_back(a[0]);
    int sum = a[0];
    for (int i = 1; i < n; i++)
    {
        sum += a[i];
        if ((sum>=a[i + 1])&&a[i+1]!=0)
        {
            return 0;
        }
        ans.push_back(sum);
    }
    return 4;
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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> ans;
        if (solve(a, n, ans))
        {
            for (auto x : ans)
            {
                cout << x << " ";
            }
        }
        else
        {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}