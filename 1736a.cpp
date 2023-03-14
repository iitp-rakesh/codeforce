#include<bits/stdc++.h>
using namespace std;
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
int t;cin>>t;
while(t--) {
    int n;
    cin>>n;
    int a[n],b[n];
    int counta1=0,countb1=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]==1){
            counta1++;
        }
    }
     for(int i=0; i<n; i++){
        cin>>b[i];
        if(b[i]==1){
            countb1++;
        }
    }
    int count=0;
    for(int i=0; i<n; i++){
        if(a[i]!=b[i]){
            count++;
        }
    }
    int ans=0;
    for(int i=0; i<n; i++){
        ans+=(a[i]^b[i]);
        // cout<<ans<<" ";
    }
    cout<<min(ans,1+abs(counta1-countb1))<<endl;
}
return 0;
}