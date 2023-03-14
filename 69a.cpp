#include<bits/stdc++.h>
using namespace std;
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
    int n;
    cin >> n;
    int sumx=0,sumy=0,sumz=0;
    int x[n],y[n],z[n];
    for(int i = 0; i < n; i++){
        cin>>x[i]>>y[i]>>z[i];
        sumx+=x[i];sumy+=y[i];sumz+=z[i];
    }
    if(sumx==0&&sumy==0&&sumz==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
return 0;
}