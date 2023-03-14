#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    int a[t];
    int ans=0;
    for(int i=0;i<t;++i){
        cin>>a[i];
        if(a[i]==0)a[i]=-1;
        else ans++;
    }
    int curr=0,mx=10e5+1;
    for(int i=0;i<t;i++){
        curr+=a[i];
        if(curr>0)curr=0;
        mx=min(mx,curr);
    }
    if(ans==t)cout<<ans-1<<endl;
    else
    cout<<ans-mx<<endl;
    return 0;
}