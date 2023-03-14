#include<bits/stdc++.h>
using namespace std;
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
    string map="aeiouyAEIOUY";
    string str,ans;
    cin>>str;
    for(int i=0; i<str.size(); i++){
        if((map.find(str[i]))>11){
            ans.push_back('.');
            ans.push_back(tolower(str[i]));
        }
    }
    cout<<ans<<endl;
return 0;
}