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
        int l = 0, r = n - 1, min = 1, max = n, flag = 0;
        while (l < r)
        {
            if (a[l] == min || a[l] == max)
            {
                if (a[l] == min)
                    min++;
                else
                    max--;
                l++;
            }
            else if (a[r] == min || a[r] == max)
            {
                if (a[r] == min)
                    min++;
                else
                    max--;
                r--;
            }
            else
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            cout << l + 1 << " " << r + 1;
        }
        else
        {
            cout << -1;
        }
        cout << endl;
    }
    return 0;
}