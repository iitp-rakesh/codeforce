#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t, n, i, j;
    string ans, s, s1;
    
    cin>>t;
    
    for(;t--;)
    {
        cin>>n;
        cin>>s;
        
        ans="NO";
        
        unordered_map<string, ll> mp;
        
        for(i=0; i<n-1; i++)
        {
            s1=s[i];
            s1+=s[i+1];
            
            if(mp.find(s1)==mp.end()){
                mp[s1]=i;
            }else{
                if(mp[s1]!=i-1){
                    ans="YES";
                    break;
                }
            }
        }
        
        cout<<ans<<"\n";
    }
}