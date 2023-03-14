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
        cin>>n;
        int a[n][2];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i][0]>>a[i][1];
        }
        int flag=0;
        if(a[0][0]<a[0][1]){
            flag=1;
        }
        for(int i=1;i<n;i++){
            if(a[i][0]>=a[i-1][0]&&a[i][1]>=a[i-1][1]){
                if((a[i][0]-a[i-1][0])>=(a[i][1]-a[i-1][1])){

                }
                else{
                    flag=1;
                }
            }
            else{
                flag=1;
            }
        }
        if(flag){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}