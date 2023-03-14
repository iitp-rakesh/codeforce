#include <bits/stdc++.h>
using namespace std;
using namespace std;

int splitString(string s)
{
    int dp[26]={0};
    int ans=0;
    for(int i=0;i<s.size();i++){
        if(dp[s[i]-'a']==0){
            ans++;
        }
        dp[s[i]-'a']++;
    }
return ans;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;cin>>n;
        string s;
        cin >> s;
        int mx=0;
        for (int i = 1; i < n-1; i++)
        {
            mx=max(mx,splitString(s.substr(0,i+1))+splitString(s.substr(i+1,n-i-1)));
        }
        cout << mx << endl;
    }
    return 0;
}