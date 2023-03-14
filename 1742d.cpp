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
        vector<int> v(1001,0);
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            v[x]=i;
        }
        int maxi=-1;
        for (int i = 1; i <=1000; i++)
        {
            for (int j = 1; j <=1000; j++)
            {
                if ( v[i]&&v[j]&&(__gcd(i,j)) == 1)
                {
                    maxi=max(maxi,v[i]+v[j]);
                }
            }
        }
        cout<<maxi<<endl;
    }
    return 0;
}