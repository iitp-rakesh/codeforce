#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,m;
    cin >> t>>m;
    string s;cin >> s;
    string map="_abcdefghijklmnopqrstuvwxyz";
    for(int i=0;i<m;i++){
        char a,b;
        cin >> a>>b;
        int a1=map.find(a);
        int b1=map.find(b);
        map[a1]=b;
        map[b1]=a;
    }
    for(int i=0;i<s.length();i++){
        cout<<map[int(s[i]-96)];
    }
    return 0;
}