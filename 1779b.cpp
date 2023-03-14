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
        if (n % 2 == 0)
        {
            for (int i = 0; i < n; i++)
            {
                if (i % 2 == 0)
                {
                    a[i] = 1;
                }
                else
                {
                    a[i] = -1;
                }
            }
            cout << "YES" << endl;
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
        else if (n == 3)
        {
            cout << "NO" << endl;
        }
        else
        {
            int x = n / 2;
            for (int i = 0; i < n; i++)
            {
                if (i % 2 == 0)
                {
                    a[i] = x-1;
                }
                else
                {
                    a[i] = x *- 1;
                }
            }
            cout << "YES" << endl;
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}