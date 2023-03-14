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
        long long n, x;
        cin >> n >> x;
        long long a[n];
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (long long i = 0; i < n; i++)
        {
            a[i] += (i + 1);
        }
        sort(a, a + n);
        long long sum = 0, ans = 0;
        // for (int i = 0; i < n; i++)
        // {
        //     cout << a[i] << " ";
        // }
        // cout << endl;
        for (long long i = 0; i < n; i++)
        {
            sum += a[i];
            if (sum >= x)
            {   
                ans = i;
                if(sum==x)
                ans++;
                break;
            }
            else{
                ans=i+1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}