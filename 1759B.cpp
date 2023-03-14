#include<bits/stdc++.h>
using namespace std;
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
int t;cin>>t;
while(t--){
    int n,sum;
    cin>>n>>sum;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        sum+=x;
    }
    int d = 1 + 8  *sum ;
    double sqrt_val = sqrt(abs(d));
    if(sqrt_val%i==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    cout<<endl;
}
return 0;
}