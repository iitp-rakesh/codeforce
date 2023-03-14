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
        int n, m,flag=0;
        cin >> n >> m;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        set<int> s;
        for (int i = 2; i <=m; i++)
        {
            flag = 0;
            for (int j = 0; j < n; j++)
            {

                if (a[j] % i == 0)
                {
                    flag = 1;
                    s.insert(a[j]);
                }
            }
            if (flag == 0)
                break;
        }
        if (flag == 0)
        {
            cout << "-1";
        }
        else
        {
            for (auto &i : s)
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}