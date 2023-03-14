#include <bits/stdc++.h>
using namespace std;
int prime2(int n)
{
    int nas = 0;
    while (n % 2 == 0)
    {
        n /= 2;
        nas++;
    }
    return nas;
}
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
        vector<int> v;
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            int element;
            cin >> element;
            v.push_back(element);
            res += prime2(element);
        }
        if (res >= n)
        {
            cout << 0;
        }
        else
        {
            int ans = 0;
            int a[n];
            for (int i = 0; i < n; i++)
            {
                a[i] = prime2(i + 1);
            }
            sort(a, a + n);
            int flag = 1;
            for (int i = n - 1; i >= 0; i--)
            {
                res += a[i];
                if (res >= n)
                {
                    cout << n - i;
                    flag = 0;
                    break;
                }
            }
            if (flag == 1)
            {
                cout << -1;
            }
        }
        cout << endl;
    }
    return 0;
}