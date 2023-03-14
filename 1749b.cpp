#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
int t;cin >> t;
while(t--){
    int n;
    cin >> n;
    vector<ll>v,u;
    int64_t sum=0;
    for(int i=0;i<n;i++){
    ll element;
    cin>>element;
    v.push_back(element);
    sum+=element;
    }
    for(ll i=0;i<n;i++){
    ll element;
    cin>>element;
    u.push_back(element);
    }
    sort(u.begin(),u.end ());
    // cout<<u[0]<<" ";
    sum=accumulate(u.begin(),u.end ()-1,sum);
    cout<<sum<<endl;
}
return 0;
}