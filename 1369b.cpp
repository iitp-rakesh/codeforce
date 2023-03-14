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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int flag=0;
        for(int i=0;i<n-1;i++){
            if(s[i]>s[i+1]){
                flag=1;
            }
        }
        string ans="";
        if(flag==0){
            cout<<s<<endl;
        }
        else{
            int i=0,r=n-1;
            while(s[i]!='1'){
                ans.push_back('0');
                i++;
            }
            ans.push_back('0');
            while(s[r]!='0'){
                ans.push_back('1');
                r--;
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}