#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll solve(ll n){
    ll x=(n-3)/3;
    if(x<1){
        return 0;
    }
    return x-1;
}
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
ll t;cin >> t;
while(t--){
    ll n;
    cin >> n;  
    cout<<solve(n)<<endl;
}
return 0;
}