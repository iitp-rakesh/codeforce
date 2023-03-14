#include<bits/stdc++.h>
using namespace std;
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
int t;cin >> t;
while(t--){
    int n;
    cin >> n;
    int x=n;
    for(int i = 1,j=1; i <=n; i++){
        if(i%2==0){
            cout<<x--<<" ";
        }
        else{
            cout<<j++<<" ";
        }
    }
    cout<<endl;
}
return 0;
}