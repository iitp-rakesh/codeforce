#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

        ull n,k;
        cin >> n>>k;
        string s;
        cin >> s;
        ull a[27];
        for(ull i=0;i<k;i++){
            char c;cin >> c;
            a[c-'a']=1;
        }
        long long res=0;
        for(ull i=0;i<n;i++){
            ull ans=0;
           while(i<n&&a[s[i]-'a']==1){
                ans++;
               i++;
           }
              res+=(ans*(ans+1))/2;
        }
        cout<<res<<endl;
    
    return 0;
}