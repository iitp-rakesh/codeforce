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
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            s.insert(a[i]);
        }
        if (s.size() == 2)
        {
            cout << n / 2 + 1;
        }
        else
        {
            cout << n;
        }
        cout << endl;
    }
    return 0;
}