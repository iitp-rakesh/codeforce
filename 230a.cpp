#include<bits/stdc++.h>
using namespace std;
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
int s,n;
cin >> s >> n;
pair<int,int>p;
for(int i=0; i<n; i++){
    cin>>a[i]>>b[i];
}
 {
    if(s<a[i]){
        cout<<"NO";
        exit(0);
    }
    else{
        s+=b[i];
    }
}
cout<<"YES";
return 0;
}