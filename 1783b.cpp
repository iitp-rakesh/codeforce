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
        int a[n][n];
        int k = 1, m = 0, t = 1;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                for (int j = 0; j < n; j++)
                {
                    if (k % 2 == 1)
                    {
                        a[i][j] = t;
                        t++;
                    }
                    else
                    {
                        a[i][j] = n * n - m;
                        m++;
                    }
                    k++;
                }
            }
            else
            {
                for (int j = n - 1; j >= 0; j--)
                {
                    if (k % 2 == 1)
                    {
                        a[i][j] = t;
                        t++;
                    }
                    else
                    {
                        a[i][j] = n * n - m;
                        m++;
                    }
                    k++;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << a[i][j] << " ";
                /* code */
            }
            cout << endl;
        }
    }
    return 0;
}