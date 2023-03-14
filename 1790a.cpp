#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string s,mp="314159265358979323846264338327";
        cin >> s;
        int ans=0;
        for(int i=0;i<s.length();i++){
            if(s[i]==mp[i]){
                ans++;
            }
            else{
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}