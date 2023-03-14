#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>&a,int n){
    for(int k=n/2+1; k>0;--k){
        int l=0,r=n-1,round=0,flag=0;
        // auto it=upper_bound(a,a+n,k);
        while(a.empty()){
            // cout<<a[r]<<" "<<1+k-round<<endl;
            if(a[r]<=1+k-round){
                a.erase(a.begin());
                round++;
                flag=1;
            }
            r--;
        }
        // cout<<round<<k<<endl;
        if(round==k && flag==1){
            return round;
        }
    }
    return 0;
}
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
int t;cin >> t;
while(t--){
    int n;
    cin >> n;
    vector<int>v;
    for(int i=0;i<n;i++){
    int element;
    cin>>element;
    v.push_back(element);
    }
    sort(v.begin(),v.end());
    cout<<solve(v,n);
}
return 0;
}