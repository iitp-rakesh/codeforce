#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll lcm(ll a,ll b){
    ll g=__gcd(a,b);
    return (a*b/g);
}
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
int t;cin >> t;
while(t--){
    int flag=0;
    ll n;
    cin >> n;
    ll a[n+2];
    for(int i=1; i<n+1; i++){
        cin >> a[i];
    }
    a[n+1]=1;a[0]=1;
    ll b[n+1];
    for(int i=0; i<n+2; i++){
        b[i]=lcm(a[i],a[i+1]);
    }
    for(int i=0; i<n; i++){
        if(__gcd(b[i],b[i+1])!=a[i+1]){
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
    cout<<endl;
}
return 0;
}