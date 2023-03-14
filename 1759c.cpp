#include <bits/stdc++.h>
using namespace std;
int solve(int x, int y, int z, int a, int b)
{
    if (a == b)
    {
        return 0;
    }
    if (abs(a - b) >= z)
    {
        return 1;
    }
    if (y - max(a, b) >= z || min(a, b) - x >= z)
    {
        return 2;
    }

    if ((y - b >= z && a - x >= z) || (y - a >= z && b - x >= z))
    {
        return 3;
    }

    return -1;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z, a, b;
        cin >> x >> y >> z >> a >> b;
        cout << solve(x, y, z, a, b) << endl;
    }
    return 0;
}