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
        long long n,k,r,q;
        cin >> n>>k;
        r=k%(n-1);
        q=k/(n-1);
        if(r==0){
            cout<<n*q-1<<endl;
        }
        else{
            cout<<n*q+r<<endl;
        }
    }
    return 0;
}