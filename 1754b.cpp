#include<bits/stdc++.h>
using namespace std;
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
int t;cin >> t;
while(t--){
    int n;cin >> n;
    int x=n/2 + 1;
    for(int i=0,j=0,k=1;i<n;i++){
        if(i%2==0){
            cout<<x+j++<<" ";
        }
        else{
            cout<<k++<<" ";
        }
    }
    cout<<endl;
}
return 0;
}