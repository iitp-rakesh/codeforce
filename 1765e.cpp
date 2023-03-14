#include<bits/stdc++.h>
using namespace std;
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
int t;cin>>t;
while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    if(b<c){
        if(a%b==0){
            cout<<a/b;
        }
        else{
            cout<<a/b+1;
        }
    }
    else{
        cout<<1;
    }
    cout<<endl;
}
return 0;
}