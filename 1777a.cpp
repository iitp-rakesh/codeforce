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
        int chk, ans = 0;
        if (a[0] % 2 == 0)
        {
            chk = 0;
        }
        else
        {
            chk = 1;
        }
        for (int i = 1; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                if (chk == 0)
                    ans++;
                chk = 0;
            }
            else
            {
                if (chk == 1)
                    ans++;
                chk = 1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}