#include<bits/stdc++.h>
using namespace std;
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
    int str;
    cin >> str;
    int flag=0;
    int n[]={4,44,444,7,77,777,47,74,477,474,744,747};
        for(int j = 0; j <12; j++){
            if(str%n[j]==0){
                cout<<"YES";
                exit(0);
            }
        }
    
    cout<<"NO";
return 0;
}