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
        long long a[n];
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<long long> v;
        v.push_back(0);
        long long x = a[0];
        for (long long i = 1; i < n; i++)
        {
            if (a[i] > 0 && a[i - 1] < 0)
            {
                v.push_back(x);
                x = a[i];
            }
            else if (a[i] < 0 && a[i - 1] > 0)
            {
                v.push_back(x);
                x = a[i];
            }
            x = max(x, a[i]);
            if (i == n - 1)
            {
                if (v[v.size() - 1] * x < 0)
                    v.push_back(x);
            }
        }
        long long sum = 0;
        for (long long i = 0; i < v.size(); i++)
        {
            sum += v[i];
        }
        if (v.size() == 1)
            cout << x << endl;
        else
            cout << sum << endl;
    }
    return 0;
}