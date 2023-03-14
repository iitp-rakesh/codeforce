#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;
        vector<ll> v(x+1);
        vector<ll> u;
        vector<ll>sum(x+1);
        sum[0]=0;v[0]=0;
        for (ll i = 1; i <=x; i++)
        {
            ll element;
            cin >> element;
            v[i]+=v[i-1]+element;
            sum[i]=max(sum[i-1],element);
        }
        for (ll i = 0; i < y; i++)
        {
            ll element;
            cin >> element;
            u.push_back(element);

        }
        // sort(v.begin(), v.end());
        for (ll i = 0; i < y; i++)
        {
            // ll sum = 0;
            ll k=upper_bound(sum.begin(), sum.end(),u[i])-sum.begin()-1;
            cout <<v[k]<< " ";
        }
        cout<<endl;
    }
    return 0;
}