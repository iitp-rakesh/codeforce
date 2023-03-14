#include<bits/stdc++.h>
using namespace std;
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
string map="_abcdefghijklmnopqrstuvwxyz";
int t;
cin>>t;
while(t--){
    int n;cin>>n;
    string in;cin>>in;
    sort(in.begin(),in.end());
    cout<<map.find(in[n-1])<<endl;
}
return 0;
}