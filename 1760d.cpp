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
            if (i == 0 || x != a.back())
            {
                a.push_back(x);
            }
        }
        n=a.size();
        int res = 0, dec = 0, inc = 0;
        for (int i = 0; i < n; i++)
        {
            if ((i == 0 || a[i - 1] > a[i]) && (a[i + 1] > a[i] || i == n - 1))
            {
                res++;
            }
        }
        if (res != 1)
        {
            cout << "NO";
        }
        else
        {
            cout << "YES";
        }
        cout << endl;
    }
    return 0;
}