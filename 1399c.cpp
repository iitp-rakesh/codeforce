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
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int mx=0,ans=0;
        sort(a,a+n);
        int i=2;
        while(i<=2*n){
            int l=0,r=n-1,mx=0;
            while(l<r){
                if(a[l]+a[r]==i){
                    mx++;
                    l++;
                    r--;
                }
                else if(a[l]+a[r]>i){
                    r--;
                }
                else{
                    l++;
                }
            }
            ans=max(ans,mx);
            i++;
        }     
        cout<<ans<<endl;   
    }
    return 0;
}