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
        int n;cin>>n;
        string s;cin >> s;
        int a[n-1];a[0]=1;
        for(int i=1;i<n-1;i++){
            if(s[i]==s[i-1]){
                a[i]=a[i-1];
            }
            else{
                a[i]=i+1;
            }

        }
        for(int i=0;i<n-1;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}