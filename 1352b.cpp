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
        int n, k;
        cin >> n >> k;
        if (k % 2 == 1)
        {
            if (n % 2 == 0 && n >= 2 * k)
            {
                cout << "YES"<<endl;
                for (int i = 0; i < k - 1; i++)
                {
                    cout << 2 << " ";
                }
                cout << n - 2 * (k - 1);
            }
            else if (n % 2 == 1)
            {
                cout << "YES"<<endl;
                for (int i = 0; i < k - 1; i++)
                {
                    cout << 1 << " ";
                }
                cout << n - (k - 1);
            }
            else
                cout << "NO";
            cout << endl;
        }
        else
        {
            if (n % 2 == 0)
            {
                cout << "YES"<<endl;
                for (int i = 0; i < k - 1; i++)
                {
                    cout << 2 << " ";
                }
                cout << n - 2 * (k - 1);
            }
            else
                cout << "NO";
            cout << endl;
        }
    }
    return 0;
}