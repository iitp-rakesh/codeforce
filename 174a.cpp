#include<bits/stdc++.h>
using namespace std;
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
int n,b;
cin >> n >> b;
vector<int>v;
for(int i=0;i<n;i++){
int element;
cin>>element;
v.push_back(element);
}
int x=0;float ans[n];
x=accumulate(v.begin(),v.end(),x);
vector<int>tmp=v;
sort(tmp.begin(),tmp.end());
x+=b;
    float q=float(x)/n;
    for(int i=0;i<n;i++){
        if(q<tmp[n-1]){
            cout<<"-1";
            exit(0);
        }
        ans[i]=( q-v[i]);
    }
    for(int i=0;i<n;i++){
        cout<<fixed<<setprecision(6)<<ans[i]<<endl;
    }
return 0;
}