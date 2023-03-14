#include<bits/stdc++.h>
using namespace std;
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
int a,b,c,i;cin>>a>>b>>c;
int ans[a][2];
for(i=0;i<a-2;i++){
    if(b>0){
    ans[i][0]=1;
    ans[i][1]=0;
    b--;
    }
    else if(c>0){
        ans[i][0]=0;
        ans[i][1]=1;
        c--;
    }
}

ans[i][0]=b;
ans[i][1]=0;
ans[i+1][0]=0;
ans[i+1][1]=c;
for(int i=0;i<a;i++){
    cout<<ans[i][0]<<":"<<ans[i][1]<<endl;
}
return 0;
}