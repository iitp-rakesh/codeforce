#include<bits/stdc++.h>
using namespace std;
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
int t;cin>>t;
while(t--){
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(a[n-1]==b[i]){
            cout<<b[i]-a[n-2]<<" ";
        }
        else{
            cout<<b[i]-a[n-1]<<" ";
        }
    }
    cout<<endl;
}
return 0;
}