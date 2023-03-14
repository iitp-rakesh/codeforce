#include<bits/stdc++.h>
using namespace std;
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
int t;cin >> t;
while (t--) {
    int n;
    cin >> n;
    int a[n];
    if(n==3){
        cout<<"-1";
    }
    else{
        int k=n;
        for(int i=3; i<=n; i++){
           cout<<i<<' ';
        }
        cout<<2<<' '<<1;
    }
    cout<<endl;
}
return 0;
}