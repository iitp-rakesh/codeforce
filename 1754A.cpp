#include<bits/stdc++.h>
using namespace std;
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
int t;cin >> t;
while(t--){
    int n;
    cin>>n;
    string str;
    cin>>str;
    int x=0,y=0,count=0;
    for(int i=0;i<n;i++){
        if(count<0){
            count=0;
        }
        if(str[i]=='Q'){
            // x+=i;
            count++;
        }
        else{
            // y+=i;
            count--;
        }
    }
    if(count<=0){
        cout<<"YES";
        
    }
    else{
        cout<<"NO";
    }
    cout<<endl;
}
return 0;
}