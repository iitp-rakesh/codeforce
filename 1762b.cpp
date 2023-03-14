#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll f(ll x){
    ll cur=1,ans=1;
    while(ans<=x){
        cur*=2;
        ans++;
    }
    return cur;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cout<<n<<endl;
        ll a[n];
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        for (ll i = 0; i < n; i++)
        {
            ll x=ceil(log2(a[i]));
            cout<<i+1<<" "<<f(x)-a[i]<<endl;
        }
    }

    return 0;
}