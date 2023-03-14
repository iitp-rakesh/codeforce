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
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        int flag=1;
        for(int i=0;i<n-1;i++){
            if(a[i]==a[i+1]&&a[i]==-1){
                cout<<sum+4<<endl;
                flag=0;
                break;
            }
        }
        if(flag){
        if(sum==n){
            cout<<n-4<<endl;
        }
        else{
            cout<<sum<<endl;
        }}
    }
    return 0;
}