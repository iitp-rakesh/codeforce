#include<bits/stdc++.h>
using namespace std;
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
int t;cin >> t;
while (t--) {
    int n,k;
    cin >> n>>k;
    vector<int>v;
    for(int i=0;i<n;i++){
    int element;
    cin>>element;
    v.push_back(element);
    }
    int x=find(v.begin(),v.end(),1)-v.begin();
    if(x==n){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
    cout<<endl;
}
return 0;
}