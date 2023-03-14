#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k, a, b;
        cin >> n >> k >> a >> b;
        ll y = 0;
        if (n * b < k * (b + 1))
        {
            y += (n * b * (a / (b + 1)));
            if (n < k)
            {
                y += (n * (a % (b + 1)));
            }
            else
            {
                y += (k * (a % (b + 1)));
            }
        }
        else
        {
            y += (k * a);
        }
        cout<<y<<endl;
    }
    return 0;
}