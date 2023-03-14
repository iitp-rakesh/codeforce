#include <bits/stdc++.h>
using namespace std;
long long fun(long long x)
{
    long long i = 2;
    while (i <= x / 2)
    {
        if (x % i == 0)
        {
            return i;
        }
        i++;
    }
    return x;
}
// 2 3 4 5 6 7 8 9 10
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        // cout<<fun(a)<<" "<<fun(b)<<endl;
        a += fun(a);
        cout << (b - a+1) / 2 + 1 << endl;
    }
    return 0;
}