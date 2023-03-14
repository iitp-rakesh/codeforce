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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int al, bo;
        al = a + b;
        bo = a + c;
        al = al + min(al, c + d);
        bo = bo + min(bo, b + d);
        int x = 0, ans = min(al, bo);
        if (a != 0)
        {
            cout << a + min(b, c) * 2 + min(a + 1, abs(b - c) + d) << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
    return 0;
}