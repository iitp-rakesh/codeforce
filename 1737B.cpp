#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
int t;cin >> t;
while (t--) {
    ll l,r,x,count=0;
    cin >> l >> r;
   for (int i = l; i <=r; i++){
       x=sqrt(i);
       if(i%x==0){
           count++;
       }
   }
   cout<<count<<endl;

}
return 0;
}