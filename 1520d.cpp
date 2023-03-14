#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin>>n;
        long long a[n];
        vector<long long>b;
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }
        long long ans=0;
        map<long long,long long>m;
        for(long long i=0;i<n;i++){
            m[a[i]-i]++;
        }
        for(auto i:m){
            if(i.second>1){
                ans+=i.second*(i.second-1)/2;
            }
        } 
        cout<<ans<<endl;
        
    }
    return 0;
}