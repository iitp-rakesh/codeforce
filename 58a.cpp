#include<bits/stdc++.h>
using namespace std;
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
    string str,map="hello";
    cin>> str;
    int j=0;
    for(int i=0;i<str.size();i++){
        if(str[i]==map[j]){
            // cout<<str[i];
            j++;
        }
    }
    // cout<<j<<endl;
    if(j>4){
        cout<<"YES";
    }
    else{
      cout<<"NO";  
    }
return 0;
}