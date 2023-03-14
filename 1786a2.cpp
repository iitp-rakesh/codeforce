#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        long a[4] = {0};
        long j = 0, sum = 0;
        for (long i = 1; sum < n; i += 4)
        {
            sum += i;
            if (sum <= n)
            {
                long x = i / 2;
                if (j % 2)
                {
                    a[2] += x;
                    a[3] += (x + 1);
                }
                else
                {
                    a[0] += (x + 1);
                    a[1] += x;
                }
            }
            else
            {
                sum -= i;
                break;
            }
            j++;
        }
        long x = (n - sum) / 2;
        long y = n - sum - x;
        if (j % 2)
        {
            a[2] += x;
            a[3] += y;
        }
        else
        {
            a[0] += y;
            a[1] += x;
        }
        for (long i = 0; i < 4; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}