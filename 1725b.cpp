#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, p;
    cin >> n >> p;
    int d[n];
    for (int i = 0; i < n; i++)
    {
        cin >> d[i];
    }
    sort(d, d + n);
    ll sum = 0, i = n - 1, count=0, k = -1;
    while (i >= k)
    {
        sum=0;
        while (sum < p && i>=k)
        {
            sum +=d[i];
            k++;
        }
        // cout<<i<<k<<sum<<" "<<d[i];
        if(sum>p){
        count++;
        i--;}
    }
    cout<<count;
    // for(int i=0; i<n; i++){
    //     cout<<d[i]<<" ";
    // }
    return 0;
}