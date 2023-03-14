#include<bits/stdc++.h>
using namespace std;
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
set<int>x(v.begin(),v.end());
if(x.size()==v.size()){
    cout<<"YES";
}
else{
    cout<<"NO";
}
cout<<endl;
}
return 0;
}