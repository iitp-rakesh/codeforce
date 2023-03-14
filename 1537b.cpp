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
        int n;
        cin >> n;
        ll a[n];
        for(int i = 0; i < n; i++) {
        	cin >> a[i];
        }
        sort(a,a+n);
        ll ans = 10e9+1,ind;
        vector<ll> v;
        for(int i = 0; i < n-1; i++) {
            if(a[i+1]-a[i]<ans){
                ans=a[i+1]-a[i];
                ind=i;
            }
        }
        v.push_back(a[ind]);
        for(int i = ind+2; i < n; i++) {
            v.push_back(a[i]);
        }
        for(int i = 0; i < ind; i++) {
            v.push_back(a[i]);
        }
        v.push_back(a[ind+1]);
        for(int i = 0; i < n; i++) {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}