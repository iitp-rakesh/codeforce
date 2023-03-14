#include<bits/stdc++.h>
using namespace std;
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
string str;
cin >> str;
if('A'<=str[0]&&str[0]<='Z'&&'A'<=str[1]&&str[1]<='Z'){
   for(int i=0;i<str.size();i++){
       char c=tolower(str[i]);
       cout<<c;
   }
}
else if('A'<=str[1]&&str[1]<='Z'&&'a'<=str[0]&&str[0]<='b'){
    char c=toupper(str[0]);
    cout<<c;
    for(int i=1;i<str.size();i++){
       char c=tolower(str[i]);
       cout<<c;
   }
}
else{
    cout<<str;
}
return 0;
}