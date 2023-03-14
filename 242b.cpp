#include<bits/stdc++.h>
using namespace std;
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
int n;
cin >> n;
    vector<int> v,u,tmpa,tmpb;
for(int i=0;i<n;i++) {
    int a,b;
    cin >> a >> b;
    v.push_back(a);
    u.push_back(b);
}
tmpa=v;tmpb=u;
sort(tmpa.begin(),tmpa.end());
sort(tmpb.begin(),tmpb.end());
int flag=0;
// cout<<tmpa[0]<<" "<<tmpb[n-1]<<endl;
for (int i=0;i<n;i++){
    if(tmpa[0]==v[i]&&tmpb[n-1]==u[i]){
        flag=i+1;
    }
}
if(flag==0){
    cout<<"-1";
}
else{
    cout<<flag;
}
return 0;
}