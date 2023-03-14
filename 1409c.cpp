#include <bits/stdc++.h>
using namespace std;
vector<int> solve(int n, int x, int y)
{
    vector<int> v;
    int d = y - x;
    if (n == 2)
    {
        v.push_back(x);
        v.push_back(y);
        return v;
    }
    int i=n;
    while (i--)
    {
        if ((y - x) % (i) == 0)
        {
            d = (y - x) /i;
            for (int j = 0; j <= i; j++)
            {  
                v.push_back(x +j* d);
            }
            int t=(x-1)/d;
            i=1;
            while (v.size()<n&&i<=t)
            {
                v.push_back(x - (i)*d);
                i++;
            }
            i=1;
            while (v.size()<n)
            {
                v.push_back(y + (i)*d);
                i++;
            }
            
            return v;
        }
    }
    return v;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> v = solve(n, x, y);
        for (auto i : v)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}